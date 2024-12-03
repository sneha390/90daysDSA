#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>num(n);
    for(int i = 0; i < n;i++){
        cin >> num[i];
    }

    int currSum = num[0];
    int maxSum = num[0];
    for(int i = 1; i < n; i++){
        currSum = max(currSum + num[i] , num[i]);

        maxSum = max(maxSum , currSum);
    }
    cout << "MaxSum : " << maxSum<< endl;
    return 0;
}