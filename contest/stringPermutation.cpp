// 3146. Permutation Difference between Two Strings
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findPermutationDifference(string s, string t) {
        unordered_map<char, int> indexS;  
        unordered_map<char, int> indexT;  
        
        for (int i = 0; i < s.length(); ++i) {
            indexS[s[i]] = i;
        }
        
        int diff = 0;
        for (int i = 0; i < t.length(); ++i) {
            indexT[t[i]] = i;
            diff += abs(indexS[t[i]] - indexT[t[i]]);
        }
        
        return diff;
        
}

int main(){
    string s;
    string t;
    cin >> s;
    cin >> t;
    int result = findPermutationDifference(s,t);
    cout << result << endl;
}