// Problem: 
// Check if the following given array contains duplicate elements within k distance from each other.
// Brute-Force Approach
// Time Complexty : O(n *k)
//  Space Complexity: O(1)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkDuplicateWithinK(int arr[] , int n , int k){

    for( int i = 0 ; i < n; i++){
        for(int j = i+1 ; j <=i+k && j < n ; j++){
            if(arr[i] == arr[j]){
                if((j-i) <= k){
                    return true;
                }
            }
        }
    }
    return false;
};

int main(){
    int arr[7]= { 10 , 5 , 3 , 4,3,5,6};
    bool result = checkDuplicateWithinK(arr, 7 , 3);
    if(result == true){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}