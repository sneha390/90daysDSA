// Maximum Total Damage With Spell Casting

// Difficulty:Medium
// A magician has various spells.You are given an array power, where each element represents the damage of a spell. Multiple spells can have the same damage value.

// It is a known fact that if a magician decides to cast a spell with a damage of power[i], they cannot cast any spell with a damage of power[i] - 2, power[i] - 1, power[i] + 1, or power[i] + 2.

// Each spell can be cast only once.

// Return the maximum possible total damage that a magician can cast.
// Constraints:

// 1 <= power.length <= 10^5
// 1 <= power[i] <= 10^9


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> power = {1 , 1, 3, 4};
    int n = power.size();
        long long count = 0;
        for(int i = 0; i < n; i++) {
        
    }
    
    cout << count << endl;

};

    
   

    
   
