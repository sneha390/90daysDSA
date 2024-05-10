#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<int> applyOperations(vector<int>& nums) {
        
        int i = 0;
        while(i+1!=nums.size()){
            
            if(nums[i] == nums[i+1]) {
                nums[i] = nums[i] * 2;
                nums[i+1] = 0;
            }
            i++;
        }
        
        
        bool changed = true;
        
        i = 0;
        while(changed) {
            changed=false;
          for(i = 0; i < nums.size()-1; i++) {
                if(nums[i] == 0 && nums[i+1] != 0) {
                nums[i] = nums[i+1];
                nums[i+1] = 0;
                changed = true;
                i++;
                continue;
            }
              
          }
            
        }
        return nums;    
}
int main(){
    vector<int> nums = {1 , 2 ,2, 1,1,0};
    applyOperations(nums);
}