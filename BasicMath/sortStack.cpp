#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int SIZE = 100;
class Stack{
    private:
    int arr[SIZE];
    int top;
    public:
    Stack(){
        top = -1;
    }

    bool isFull(){
        return top == SIZE -1;
    }

    bool isEmpty(){
        return top == -1;
    }

    int push(int x){
        if(isFull()){
            cout << "Stack Overflow";
            return -1;
        }
    
        return arr[++top] = x;;
    }

    int pop(){
        if(isEmpty()){
            cout << " Stack Underflow";
            return -1;
        }
        return arr[top--];
    }

    int peek(){
        if(isEmpty()){
            cout << "Stack Underflow";
            return -1;
        }
        return arr[top];
    }
};

void sortStack(Stack &S){
        Stack temp;

        while(!S.isEmpty()){
            int x = S.pop();

            while(!temp.isEmpty() && temp.peek() > x){
                S.push(temp.pop());
            }

            temp.push(x);
        }
        while(!temp.isEmpty()){
            S.push(temp.pop());
        }
    }

void printStack(Stack &S){
    Stack temp;
        while(!S.isEmpty()){
            cout << S.peek();
            S.pop();
        }
    }


int main(){
    int arr[] = { 2 , 1 , 4 ,5, 7,3};
    Stack S;
    for(int i : arr){
        S.push(i);
    }
    
    sortStack(S);
    printStack(S);

}