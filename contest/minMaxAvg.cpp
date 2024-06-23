//  3194 . Minimum Average of Smallest and Largest Elements
// You have an array of floating point numbers averages which is initially empty. 
// You are given an array nums of n integers where n is even.
// You repeat the following procedure n / 2 times:
// Remove the smallest element, minElement, and the largest element maxElement, from nums.
// Add (minElement + maxElement) / 2 to averages.
// Return the minimum element in averages.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums= {7,8,3,4,15,13,4,1};
    sort(nums.begin(),nums.end());
        
        vector<double>average;
        
        int n = nums.size();
        
        while(nums.size() > 0){
            int min = nums.front();
            int max = nums.back();
            nums.erase(nums.begin());
            nums.pop_back();
            
            double avg= (min+max)/2.0;
            average.push_back(avg);
            
        }
    cout <<  *min_element(average.begin(),average.end()) << endl;
        
}
    
