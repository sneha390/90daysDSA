#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<int>arr){
    int n = arr.size();
    for( int i = 1 ; i < n ; i++){
        for(int j = i - 1 ; j >= 0 ; j --){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }

    }
    int median = n/2;
    return arr[median];
}

int main(){
    vector<int> arr = {0 , 1 , 2 , 4 , 6 , 5 ,3};
    int result = findMedian(arr);
    cout << result << endl;
}