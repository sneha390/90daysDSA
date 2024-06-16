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