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

vector<int> sortedSquares(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        vector<int> arr(nums.begin(),nums.end());
        int i = nums.size() - 1;

        while(i >=0){
            if(nums[start] * nums[start] > nums[end] * nums[end]){
                arr[i--] = nums[start]* nums[start];
                start++;
            } 
            else{
                arr[i--] = nums[end]*nums[end];
                end--;
            }
            
        }
        return arr;

}

int main(){
    vector<int> nums= { -4, -1, 0 ,3 ,10};
    
    vector<int> result = sortedSquares(nums);
   
    for (int nums : result) {
        cout << nums << " ";
    }

    return 0;
}

