// Problem: 
// Check if the following given array contains duplicate elements within k distance from each other.
// Time complexity: O(n)
// Space complexity: O(n)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkDuplicateElementsWithinK(int arr[] , int n , int k){

    unordered_map<int , int> mp;

    for(int i = 0 ; i< n; i++){
        // if the element is not present in map then insert it
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]] = i;
        }
        else{
            // if it is already present then check the condition
            if(i-mp[arr[i]] <=k){
                return true;
            }
            mp[arr[i]] = i;
        }
    }
    return false;
}

int main(){
    int arr[7]= { 10 , 5 , 3 , 4,3,5,6};
    bool result = checkDuplicateElementsWithinK(arr, 7 , 3);
    if(result == true){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}

