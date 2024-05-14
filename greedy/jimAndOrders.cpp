#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> jimOrders(vector<vector<int>> orders) {
    
    vector<pair<int,int>>ans;
    for(int i = 0; i < orders.size(); i++){
        ans.push_back({i+1, orders[i][0] + orders[i][1]});
    }
    
    // Lambda function
    
    auto comp=[](pair<int,int> &x, pair<int , int> &y){
        if(x.second==y.second){
            return  x.first < y.first;
        }else{
            return x.second <y.second;
        }
    };
    
    sort(ans.begin() , ans.end(),comp);
    
    vector<int> result;
    for(int i = 0 ; i < ans.size() ; i++){
        result.push_back(ans[i].first);
    }
    return result ;
    

}

int main(){
    vector<vector<int>> orders = { {1, 3}, {2, 3}, {3, 3} };
    vector<int> ans = jimOrders(orders);
    for (int order : ans) {
        cout << order << " ";
    }
    cout << endl;
    return 0;

}