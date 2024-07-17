#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>&s, int k){
    if(k == 1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s,k-1);
    s.push(temp);
}

void display(stack<int> &s){
    stack<int> S2 = s; 
    while(!S2.empty()){
        cout << S2.top() << " ";
        S2.pop();
    }
    cout << endl;
}

int main(){
    stack<int> s;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        s.push(x);
    }
    int k = s.size() /2;
    solve(s, k);
    display(s);
    return 0;

}