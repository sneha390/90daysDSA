// Time Complexity = O(n);

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

    int largest = arr[0];
    int slargest = -1;
    int smallest = arr[0];
    int sSmallest = INT_MAX;

    for(int i = 1; i < n ; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }else if(arr[i] > slargest && arr[i] < largest){
            slargest = arr[i];
        }
    }

    cout << " Largest : " << largest << endl;
    cout << " Second Largest : " << slargest << endl;


    for(int i = 1; i < n ; i++){
        if(arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i] < sSmallest && arr[i] != smallest){
            sSmallest = arr[i];
        }
    }

    cout << " Smallest : " << smallest << endl;
    cout << "Smallest number : " << sSmallest << endl;

}