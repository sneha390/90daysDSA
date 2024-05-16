#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    unordered_map<int, int> mp;
    for (int i = 0; i < brr.size(); i++) {
        mp[brr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]]--;
        if (mp[arr[i]] == 0) {
            mp.erase(arr[i]);
        }
    }
    
    vector<int> ans;
    
    for (auto it : mp) {
        ans.push_back(it.first);   
    }
    
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {7, 2, 5, 3, 5, 3};
    vector<int> brr = {7, 2, 5, 4, 6, 3, 5, 3};
    vector<int> ans;
    ans = missingNumbers(arr, brr);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
