#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int>closetNumber(vector<int> arr){
    int n = arr.size();
    unordered_map<int, vector<int>> mp;
    sort(arr.begin() , arr.end());
    for(int i = 0 ; i< n-1; i++){
        int diff = arr[i+1] - arr[i];
        mp[diff].push_back(arr[i+1]);
        mp[diff].push_back(arr[i]);   
    }
    
    int mini = 1e9;
    for(auto i:mp){
        mini = min(mini, i.first);
    }
    
    vector<int> ans = mp[mini];
    sort(ans.begin() , ans.end());
    return ans;
}

int main(){
    
    vector<int>arr;
    int num;
    cin >> num;
    int input;
    for(int i = 0; i < num ; i++){
        cin >> input;
        arr.push_back(input);
    }
    vector<int> result = closetNumber(arr);
    for(int i = 0; i < result.size() ; i++){
        cout << result[i] << " ";
    }


}