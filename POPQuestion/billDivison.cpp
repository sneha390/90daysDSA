// Two friends Anna and Brian, are deciding how to split the bill at a dinner. 
// Each will only pay for the items they consume. 
// Brian gets the check and calculates Anna's portion. 
// You must determine if his calculation is correct.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i = 0; i < bill.size() ; i++){
        sum += bill[i];
    }

    int anna_cost = sum - bill[k];
    int total_cost = anna_cost / 2;

    if(b == total_cost){
        cout << "Bon - appetit";
    }else{
        b = b - total_cost ;
        cout << b;
    }
}

int main(){

    long long int n,k,b;
    cin>>n;
    cin>>k;
    cin>>b;
  
    vector<int>bill(n);
    for(int i=0;i<n;i++)
    {
        cin>>bill[i];
    }

    bonAppetit(bill,k,b);
}