// Max Sum Subarray of size K
// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

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
    int i = 0; 
    int j = 0;
    int maxi = 0;
    while(j < n){
        sum += arr[j];
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i + 1 == k){
            maxi = max(maxi , sum);
            sum -= arr[i];
            i++;
            j++;
        }
    }
    cout << maxi << endl;
    return 0;
}