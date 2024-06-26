#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *next;

    Node(int value){
        this->value = value;
        this->next = nullptr;
    }
};

class LinkedList{
    public:
    Node *head ;

    LinkedList(){
        this->head = nullptr;
    }

    int insertAtEnd(int value){
        Node *newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
        }else{
        Node *temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = nullptr;
        }
        return 1;
    }


    
    void findMiddle(){
        int length = 0;
      
        Node *temp = head;
        while(temp != nullptr){
            temp = temp->next;
            length++;
        }
        temp = head;
        int middle= length/2;
        int count = 0;
      
        while(temp != nullptr && count < middle){
            temp = temp->next;
            count++;
        }
        cout << temp->value << endl;

    }

    void display(){
        Node *temp = head;
        while(temp!= nullptr){
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    
};

int main(){
    LinkedList L1;
    L1.insertAtEnd(1);
    L1.insertAtEnd(2);
    L1.insertAtEnd(3);
    L1.insertAtEnd(4);
    L1.insertAtEnd(5);
    L1.insertAtEnd(6);
    L1.display();
    L1.findMiddle();
    return 0;
}