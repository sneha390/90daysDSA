#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int arr[n];
    int k ;
    cin >> k;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    } 
    int sum = 0;
    for(int i = 0 ; i < n- k; i++){
        for(int j = i ; j < i + k;j++){
            sum += arr[j];
        }
        cout << "Sub array Sum : " << sum << endl;

    }
    return 0;
}