// Given an integer array hours representing times in hours, return an integer denoting the number of pairs i, j where i < j and hours[i] + hours[j] forms a complete day.

// A complete day is defined as a time duration that is an exact multiple of 24 hours.
// Constraints:

// 1 <= hours.length <= 5 * 105
// 1 <= hours[i] <= 109

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long countCompleteDayPairs(const std::vector<int>& hours) {
    unordered_map<int, long long>countMap;
    long long count = 0;

    for (int i : hours) {
        int remainder = i % 24;
        int complement = (24 - remainder) % 24;

        if (countMap.find(complement) != countMap.end()) {
            count += countMap[complement];
        }

        countMap[remainder]++;
    }

    return count;
}

int main(){
    vector<int> hours = {12, 12, 30, 24, 24};

    cout << "Number of complete day pairs: " << countCompleteDayPairs(hours) <<endl;

    return 0;
}