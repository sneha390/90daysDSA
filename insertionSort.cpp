#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[] , int n){
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        int j;
        for(j = i -1 ; j >=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;

    }

    for(int i = 0 ; i < n ; i++){
        cout << arr[i]<< endl;
    }
}

int main(){
    int n= 5; 
    int arr[n] = { 3, 5,2,1,4};
    insertionSort(arr , n);
    
}