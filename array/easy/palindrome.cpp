#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &str){
    queue<char>q;
    stack<char>s;

    for(char i : str){
        q.push(i);
        s.push(i);
    }

    while(!q.empty()){
            if(q.front() != s.top()){
                return false;
            }
            s.pop();
            q.pop();
        }
    return true;
}

int main(){
    string str;
    cin >> str;

    if(palindrome(str)){
        cout << "Is palindrome" << endl;
    }else{
        cout << "Not palindrome" << endl;
    }
}
