#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// 219. Contains Duplicate II
// Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> indexMap;

        for(int i = 0; i < nums.size() ; i++){
            if(indexMap.count(nums[i])){
                if(i - indexMap[nums[i]] <= k){
                    return true;
                }
            }
            indexMap[nums[i]] = i;
        }
        return false;
}

int main(){
    int n;
    cin >> n;
    vector<int>nums(n);

    for(int i = 0 ;i < n ; i++ ){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int k ; 
    cin >> k;
   bool result = containsNearbyDuplicate(nums, k);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;

}