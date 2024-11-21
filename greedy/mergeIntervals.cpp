#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>mergeIntervals(vector<vector<int>>& arr){
    sort(arr.begin() , arr.end());

    vector<vector<int>>ans;
    ans.push_back(arr[0]);

    for(int i = 1; i < arr.size() ; i++){
        vector<int> &last = ans.back();
        vector<int> &curr = arr[i];

        if(curr[0] <= last[1]){
            last[1] = max(last[1], curr[1]);
        }else{
            ans.push_back(curr);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> arr = {{7, 8}, {1, 5}, {2, 4}, {4, 6}};
    vector<vector<int>> ans = mergeIntervals(arr);

      for (vector<int>& interval: ans) 
        cout << interval[0] << " " << interval[1] << endl;
 
    return 0;
}