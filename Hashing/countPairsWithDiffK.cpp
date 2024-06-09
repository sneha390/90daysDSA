#include <iostream>
#include <unordered_map>
#include <vector>
 
using namespace std;
 
int countPairsWithDifferenceK(const vector<int>& b, int k) {
    unordered_map<int, int> freq;
    int count = 0;
 
    for (int j = 0; j < b.size(); ++j) {
        if (freq.find(b[j] - k) != freq.end()) {
            count += freq[b[j] - k];
        }
        if (k != 0 && freq.find(b[j] + k) != freq.end()) { // to avoid double counting when k = 0
            count += freq[b[j] + k];
        }
 
        freq[b[j]]++;
    }
 
    return count;
}
 
int main() {
    vector<int> b = {1, 5, 3, 4, 2};
    int k = 2;
    cout << countPairsWithDifferenceK(b, k) << endl; // Output should be the number of pairs with difference k
    return 0;
}