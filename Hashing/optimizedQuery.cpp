#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int arr[n];
    int hash[51] = {0};
    cout << "Enter the elements in the array"<< endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        hash[arr[i]] = hash[arr[i]] + 1;
    }
    int q;
    cout << "Enter the number of query" << endl;
    cin >> q;
    for(int i = 0; i< q ; i++){
        int query;
        cin >> query;
        int count = hash[query];
        cout << query << "==" << count << endl;
    }
}


// Time Complexity = O(n + q)
// Space complexity = numbe rof elemments in hash and array
