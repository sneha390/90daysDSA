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