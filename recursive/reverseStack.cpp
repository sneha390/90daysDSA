#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int ele){
    if(s.size() == 0){
        s.push(ele);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s,ele);
    s.push(temp);

}

void reverse(stack<int> &s){
    if(s.size() == 1){
        return;
    }

    int temp = s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
  
}


void display(stack<int> &s) {
    stack<int> tempStack;
    while(!s.empty()) {
        cout << s.top() << " ";
        tempStack.push(s.top());
        s.pop();
    }
    cout << endl;
    while(!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}


int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);

    cout << "Unreversed stack" << endl;
    display(s);

    reverse(s);
    cout << "Reversed Stack" << endl;
    display(s);



}