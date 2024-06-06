// 3163. String Compression III

#include <iostream>
#include <bits.stdc++.h>
using namespace std;

string compressedString(string word) {
    string comp;
    int i = 0;
    int n = word.size();

    while (i < n) {
        char c = word[i];
        int count = 0;

        while (i < n && word[i] == c && count < 9) {
            ++i;
            ++count;
        }

        comp += to_string(count) + c;
    }

    return comp;
}

int main(){
    string word;
    cout << "Enter the word";
    cin >> word;
    
}