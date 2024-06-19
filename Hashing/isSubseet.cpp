#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[] , int n1 , int arr2[] , int n2){
    map<int, int>mp;
    for(int i = 0; i < n1; i++){
        // counting frequenciesof all elements
        mp[arr1[i]]++;
    }
    for(int i = 0 ; i< n2; i++){
        if(mp[arr2[i]] == 0){
            return false;
        }
        mp[arr2[i]]--;
        
    }
    return true;
}

int main(){
    cout << "Enter the number of elements in arr1" << endl;
    int n1;
    cin >>n1;
    int arr1[n1];
    cout << "ENter the elements" << endl;
    for(int i = 0 ; i < n1; i++){
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in arr2" << endl;
    int n2;
    cin >> n2;
    int arr2[n2];
    cout << "ENter the elements" << endl;
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
    
     bool result = isSubset(arr1, n1, arr2, n2);
    if (result) {
        cout << "arr2 is a subset of arr1." << endl;
    } else {
        cout << "arr2 is not a subset of arr1." << endl;
    }

    return 0;

}