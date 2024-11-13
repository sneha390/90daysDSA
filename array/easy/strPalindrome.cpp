#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout << "Enter the string" << endl;
    cin >> str;
    if(str == string(str.rbegin() , str.rend())){
        cout << "Yes Palindrome" << endl;
    }else{
        cout << "Not Palindrome" << endl;
    }
}