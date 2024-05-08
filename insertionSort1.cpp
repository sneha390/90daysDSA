#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionSort1(int n, vector<int> arr) {
    int num = arr[n -1];
    int flag = 0;
    for(int i = n -1 ; i >=0 ; i--){
        if(arr[i] > num){
            arr[i+1] = arr[i];
        }else if(arr[i] < num){
            arr[i+1] = num;
            flag = 1;
        }

        for(int j = 0 ; j <n; j++){
            cout << arr[j] <<" ";
        }
        cout << endl;

        if(flag == 1){
            break;
        }

        if(i == 0 && flag == 0){
            arr[0] = num;
            for(int j = 0; j < n; j++){
                cout << arr[j] << " ";
            }
        }


    }

}
int main(){
    vector<int> arr = {2 , 4 ,6,8 ,3};
    int n = arr.size();
    insertionSort1( n, arr);

}