// 100339. Find the Encrypted String
// You are given a string s and an integer k. 
// Encrypt the string using the following algorithm:
// For each character c in s, replace c with the kth character after c in the string (in a cyclic manner).
// Return the encrypted string.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string getEncryptedString(string s, int k) {
    int n = s.length();
    string ans(n, ' ');
    for(int i = 0; i < n ; i++){
      ans[i] = s[(i+k) % n];
    }
    return ans;
}

int main(){
    string s = "dart";
    int k = 3;
    cout << getEncryptedString(s,k)<< endl;
}

