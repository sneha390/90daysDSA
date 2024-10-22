// 167. Two Sum II - Input Array Is Sorted

// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, 
// find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
// The tests are generated such that there is exactly one solution. You may not use the same element twice.
// Your solution must use only constant extra space.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 vector<int> twoSum(vector<int>& numbers, int target) {

        int start = 0;
        int end = numbers.size() - 1;
        while(start < end){
            int sum = numbers[start] + numbers[end];
            if( sum == target){
              return {start + 1 , end + 1};
            }else if(  sum < target){
                start++;
            }else{
                end--;
            }
        }
        return {};
 }

 int main() {

    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(numbers, target);
    

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers sum up to the target." << endl;
    }
    
    return 0;
}