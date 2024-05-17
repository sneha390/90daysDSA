#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class LinkedList{
    public:
    int data;
    LinkedList* next;

    LinkedList(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~LinkedList(){
        int value = this -> data;
        if(this-> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data "<< value << endl;
    }
};

    void insertAtHead(LinkedList* &head ,int d){
        LinkedList* temp = new LinkedList(d);
        temp -> next = head;
        head = temp;
    }

    void insertAtTail(LinkedList* tail , int d){
        LinkedList* temp  = new LinkedList(d);

        tail -> next = temp;
        tail = temp;
    }

    void insertAtMiddle(LinkedList* head , int position , int d){
        LinkedList* temp = head;
        int count = 1; 
        while(count < position-1){
            temp = temp -> next;
            count ++;
        }

        LinkedList* nodeToInsert = new LinkedList(d);
        nodeToInsert -> next = temp ->next;
        temp -> next = nodeToInsert;
    }

    void display(LinkedList* &head){
        LinkedList* temp = head;
        while(temp != NULL){
            cout << temp -> data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteAt(int position , LinkedList* &head){
        if(position == 1){
            LinkedList* temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp;
        }else{
            LinkedList* current = head;
            LinkedList* previous = NULL;
            int cnt = 1;
            while(cnt <= position){
                previous = current;
                current = current -> next;
                cnt++;
            }

            previous-> next = current->next;
            current-> next = NULL;
            delete current;
        }
    }



int main(){
    LinkedList* node1 = new LinkedList(10);
    
    // head is pointed to node1
    LinkedList* head = node1;
    LinkedList* tail = node1;
    display(head);

    insertAtTail(tail , 15);

    insertAtHead(head,12);

    insertAtMiddle(head , 2,13);

    display(head);

    deleteAt(2 , head);

    display(head);

    deleteAt(1 , head);

    display(head);
}
