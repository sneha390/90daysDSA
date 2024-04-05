#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    int arr[9] = {1,3,3,4,1,4,4,4,4};
    int brr[9] = {0};
    int i = 0;
    while(i < n){
        int x = arr[i];
        brr[x] = brr[x] + 1;
        i++;
    }
    
    // all frequency is calculated

    int query[3] = { 1, 3 ,4};
    int num = 3;
    int j = 0;
    while(j < num){
        int x = query[j];
        cout<<"The frequenxy of "<< x << " = " <<brr[x]<< endl;
        j++;
    }
}

