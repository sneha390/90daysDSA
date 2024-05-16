#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x){
    if(x == 0 || x % 10 == 0 && x < 0){
        return false;
    }
    int reversed = 0;
    while(x > 0){
        int reversed = reversed * 10 + x % 10;
        x = x /10;
    }
    return reversed == x;
}

int main(){
    int x;
    cin >> x;
    if(isPalindrome(x) == true){
        cout << "true";
    }else{
        cout << "false";
    }
}