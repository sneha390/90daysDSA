#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int candy(vector<int>& ratings) {
        int n = ratings.size();
        int sum = 1;
        int i = 1;
        while(i < n){
            if(ratings[i] == ratings[i-1]){
                sum = sum + 1;
                i++;
                continue;
            }
            int peak = 1;
            while(i < n && ratings[i] > ratings[i -1]){
                peak++;
                sum += peak;
                i++;
            } 
            int down = 1;
            while(i < n && ratings[i] < ratings[i -1]){
                sum += down;
                i++;
                down++;
            }
            if(down > peak){
                sum += down - peak;
            }
        }
        return sum;
}

int main() {
    int n;
    cout << "Enter the number of children: ";
    cin >> n;

    vector<int> ratings(n);
    cout << "Enter the ratings of the children: ";
    for (int i = 0; i < n; i++) {
        cin >> ratings[i];
    }

    int result = candy(ratings);
    cout << "Minimum candies required: " << result << endl;

    return 0;
}