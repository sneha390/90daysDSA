#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int lengthOfLongestSubstring(string str)
{
    int n = str.size();
    int res = 0;  
    for (int i = 0; i < n; i++) {
        vector<bool> visited(256);  
 
        for (int j = i; j < n; j++) {
            if (visited[str[j]] == true)
                break;
            else {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
         visited[str[i]] = false;
    }
    return res;
}


int main() {
    // Your code goes here;
    string s = "Hello";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}