#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void closetNumber(vector<int> arr){
    int n = arr.size();
    for(int i = 1 ; i < n ; i++){
        for(int j = i -1 ; j >= 0; j--){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int minDiff = arr[1] - arr[0];
    
    for(int i = 1 ; i <= n-1;i++){
        minDiff = min(minDiff , arr[i+1] - arr[i]);
    }
    cout<< minDiff << endl;
}

int main(){
    vector<int>arr = {5 , 4, 3, 2};
    closetNumber(arr);
}