#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n;i++){
        cin >>arr[i];
    }
    int threshold;
    cin >> threshold;
    int maxEle = arr[0];
    for(int i = 0; i < n; i++){
        maxEle = max(maxEle , arr[i]);
    }

    int left = 1;
    int right = maxEle;
    while(left < right){
        int mid = (left + right) /2;
        int sum = 0; 
        for(int i =0; i< n ;i++){
            sum += (arr[i]+ mid -1) /mid;
        }
        if(sum <= threshold){
            right = mid;
        }else{
            left = mid + 1;
        }
    }
    cout << "Smallest Dividior: " << left << endl;
    return 0;
}
