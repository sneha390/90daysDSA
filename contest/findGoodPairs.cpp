// 3162. Find the Number of Good Pairs I

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        int m = nums2.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j <m; j++){
                if(nums1[i] % (nums2[j] * k)== 0) {
                    count++;
                }
            }
        }
        return count;
}

int main(){
    vector<int> nums1 = {1 , 3, 4};
    vector<int> nums2 = {1 , 3, 4};
    int k ;
    cin >> k;


    int result = numberOfPairs(nums1,nums2,k);
    cout << result << endl;

}