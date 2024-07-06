#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int>arr;
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int largest = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "largest :" << largest << endl;

    int secondLargest = 0;
    for(int i = 0; i < n ;i++){
        if(arr[i] > secondLargest && arr[i] < largest){
            secondLargest = arr[i];
        }
    }

    cout << "SecondLargest: " << secondLargest << endl;
}