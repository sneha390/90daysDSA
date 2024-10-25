#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maximumToys(vector<int> prices, int k) {
    
    int count = 0;
    sort(prices.begin(),prices.end());
    for(int i = 0; i < prices.size();i++){
        if(prices[i] <= k){
            count++;
            k = k - prices[i];   
        }
        
    }
    
    
    return count;
}

int main(){
    int k;
    cin >> k;
    vector<int>prices;
    int input;
    cin >> input;
    int price;
    for(int i = 0; i < input ; i++){
        cin >> price;
        prices.push_back(price);
    }

    int result = maximumToys(prices , k);
    cout << result;
}
