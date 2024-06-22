//  Minimum operations to make all elements equal in an array.
// Time Complexity : O(n)
// Space Complexity : O(n)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int , int> mp;

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int maxFreq = 0;
    for(auto i : mp){
        // if the frequency of i greater than maxFreq than maxFreq is equal to i.second i.e Frequency
        if(i.second > maxFreq){
            maxFreq = i.second;
        }
    }

    cout << "The number of required operations is :"<< (n - maxFreq) << endl;
}