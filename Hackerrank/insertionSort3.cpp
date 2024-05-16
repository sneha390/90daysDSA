#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int insertionSort(vector<int>arr){
    int count = 0; 
    int num = arr.size();
    for(int i = 1 ; i < num; i++){
        for(int j = i -1 ; j >=0 ; j--){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j +1] = temp;
                count ++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {2 ,1 ,3,1,2};
    int result = insertionSort(arr);
    cout << result << endl;
}