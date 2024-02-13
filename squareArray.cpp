// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// Example 1:
// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:
// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]



#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


vector<int> sortedSquares(vector<int>& nums){
        for(int i = 0; i < nums.size(); i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());

        return nums;  
}

int main(){
        vector<int> nums= { -4, -2, 0 ,2 ,4};
        vector<int> nums = {-7, -3, 2,3,11};
        vector<int> result = sortedSquares(nums);

        for (int nums : result) {
        cout << nums << " ";
    }

    return 0;
}


