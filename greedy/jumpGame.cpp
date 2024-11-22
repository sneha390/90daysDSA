#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums){
    int n = nums.size();
    int maxIndex = 0;

    for(int i = 0; i < n ; i++){
        if(i > maxIndex){
            return false;
        }else{
            maxIndex = max(maxIndex , i + nums[i]);
        }
    }
    return true;
}

int main() {
    int n; 
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n); 

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    if (canJump(nums)) {
        cout << "You can jump to the last index." << endl;
    } else {
        cout << "You cannot jump to the last index." << endl;
    }

    return 0;
}