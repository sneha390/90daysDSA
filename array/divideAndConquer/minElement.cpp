#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>arr , int low , int high){
    if(low > high){
        return INT_MIN;
    }
    if(low == high){
        return arr[low];
    }

    int mid = (low + high) / 2;
    int leftMin = findMin(arr, low , mid);
    int rightMin = findMin(arr , mid+1, high);

    return min(leftMin , rightMin);
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

    int result = findMin(arr , low, high);
    cout << "minElemet:" <<  result << endl;

}