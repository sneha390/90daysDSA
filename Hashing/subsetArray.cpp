#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the number of elements in arr1" << endl;
    int n;
    cin >>n;
    int arr1[n];
    cout << "ENter the elements" << endl;
    for(int i = 0 ; i < n; i++){
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in arr2" << endl;
    int m;
    cin >> m;
    int arr2[m];
    cout << "ENter the elements" << endl;
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    unordered_set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(arr1[i]);
    }
    for(int i = 0 ; i < m; i++){
        if(st.count(arr2[i])==0){
            cout << " Array is not subset of arr1" << endl;
        }else{
            cout << "Array1 is subset of arr1" << endl;
        }
    }
}