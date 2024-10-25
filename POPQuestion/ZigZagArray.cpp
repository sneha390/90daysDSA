#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void ZigZag(vector<int>&arr){

    for(int i = 0; i < arr.size() - 1 ; i++){
        if(i%2==0  & arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
        else if(i%2 == 1 & arr[i] < arr[i+1]){
            swap(arr[i] , arr[i+1]);

        }
    }

    for(int i = 0; i < arr.size() ; i++){
        cout << arr[i];
    }
    
}

int main(){
    vector<int> arr = { 0 , 1, 3 , 4 , 5 , 6 , 7 , 8 , 10};

    ZigZag(arr);
}