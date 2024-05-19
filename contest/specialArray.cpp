// An array is considered special if every pair of its adjacent elements contains two numbers with different parity.
// You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isArraySpecial(vector<int>& nums) {
        if(nums.size() <= 1){
            return true;
        }
        for(int i = 1 ; i < nums.size() ; i++){
            if((nums[i]%2) == (nums[i-1]%2)){
                return false;
            }
        }
        return true;
}
int main(){
    int n;
    cin >> n;
    vector<int>nums;

    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        nums.push_back(element);
    }

    bool result = isArraySpecial(nums);
    if(result == true){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

}