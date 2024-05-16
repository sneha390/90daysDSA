#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[] , int n){
    for(int i = 0; i < n; i++){
        for(int j = i -1 ; j >=0; j--){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }else{
                break;
            }
        }
        for(int k = 0; k < n; k++){
            cout << arr[k]<< " ";
        }
        cout << endl;

    }
}

int main(){
    int n= 5; 
    int arr[n] = { 3, 5,2,1,4};
    insertionSort(arr , n);
    
}