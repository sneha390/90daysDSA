#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string result(string s){
    int left = 0;
    int right = s.length() -1;

    string temp ="";
    string ans = "";

    while(left <= right){
        char ch = s[left];
        if(ch != ' '){
            temp+= ch;
        }else if(ch == ' '){
            if(ans != ""){
                ans = temp + " " + ans;
            }else{
                ans = temp;
                temp = "";
            }
        }
        left++; 
    }

    if(temp != ""){
        if(ans !=""){
            ans = temp + " " + ans;
        }else{
            ans = temp;
        }
    }
    return ans;
}

int main(){
    string s = "Sneha is a good girl";
    cout << "Before reversing string" << endl;
    cout << s << endl;
    cout << "After reversing string " << endl;
    cout << result(s) << endl;;
    return 0;

}