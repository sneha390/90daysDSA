// 3190. Find Minimum Operations to Make All Elements Divisible by Three
// You are given an integer array nums. 
// In one operation, you can add or subtract 1 from any element of nums.
// Return the minimum number of operations to make all elements of nums divisible by 3.


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 int minimumOperations(vector<int>& nums) {
         int n = nums.size();
        int count = 0;
      for( int i: nums){
          if(i%3 !=0)
              count++;
      }
        return count;
}

int main(){
    vector<int>nums = {1 , 2, 3 ,4};
    int result = minimumOperations(nums);
    cout << result << endl;
    
}