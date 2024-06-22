//  Minimum operations to make all elements equal in an array.
// Time Complexity : O(n^2)
// Space Complexity : O(!)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    int arr[n] = {1 ,2,1,4};

    int maxFreq = 0;
    int currFreq;
    int minOperation;

    for (int i = 0; i < n ; i++){
        currFreq = 1;
        for(int j = 0 ; j < n ; j++){
            if(i == j){
                continue;
            }
            if(arr[j] == arr[i]){
                currFreq++;
            }
        }
        if(currFreq > maxFreq){
            maxFreq = currFreq;
        }
    }
    minOperation = n - maxFreq;
    cout << " The minimum operations required to make all elements equal :" << minOperation << endl;
    
}