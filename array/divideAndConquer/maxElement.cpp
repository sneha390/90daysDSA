#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int maxElement(vector<int>arr , int low, int high){
    if(low>high){
        return INT_MIN;
    }

    if(low == high){
        return arr[low];
    }

    int mid = (low + high) /2;

    int leftMax = maxElement(arr, low,mid);
    int rightMax = maxElement(arr, mid+1,high);
    return max(leftMax , rightMax);
}
int main(){
    int n;
    cin >>n ;
    vector<int>arr(n);
    for(int i = 0; i < n ;i++){
        cin >> arr[i];
    }

    int low= 0;
    int high = arr.size() -1;

    int result = maxElement(arr , low, high);
    cout << "maxElemet:" <<  result << endl;

}