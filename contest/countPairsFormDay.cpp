// Given an integer array hours representing times in hours, return an integer denoting the number of pairs i, j where i < j and hours[i] + hours[j] forms a complete day.

// A complete day is defined as a time duration that is an exact multiple of 24 hours.
// Constraints:

// 1 <= hours.length <= 100
// 1 <= hours[i] <= 109

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> hrs= {12,12,30,24,24};
    int count = 0;
    int n = hrs.size();
    for(int i = 0; i < n ; i++){
        for(int j = i+ 1; j < n ; j++){
            if(i< j){
                if((hrs[i] + hrs[j])%24 == 0){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
   
}