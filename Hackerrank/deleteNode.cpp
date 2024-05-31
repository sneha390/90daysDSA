// Given a singly linked list, your task is to remove every K-th node of the
// linked list. Assume that K is always less than or equal to length of Linked
// // List.

#include <bits/stdc++.h>
using namespace std;
class Node
{
        public:
         int data;
         Node *next;
         Node(int data)
        {
                this->data = data;
                this->next = NULL;
            }
};

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
void freeList(Node *node)
{
    while (node != NULL)
    {
        Node *next = node -> next;
        delete(node);
        node = next;
    }
}

Node *getResult(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (k == 1)
    {
        freeList(head);
        return NULL;
    }

    Node *temp = head, *previous = NULL;

    int count = 0;
    while(temp != NULL)
    {
        count++;
        if (k == count)
        {
            Node *store = temp -> next;
            delete(previous -> next);
            previous -> next = store;
            count = 0;
        }

        if (count != 0)
        {
            previous = temp;
        }

        temp = previous -> next;
    }

    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    return;
}


int main()
{
    Node *head = takeinput();
    print(head);
    cout << endl;
    int k = 4;
    head = getResult(head, k);

    print(head);
}



