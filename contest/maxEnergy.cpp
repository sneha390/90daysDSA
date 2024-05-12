// 3147. Taking Maximum Energy From the Mystic Dungeon

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int maxiEnergy(vector<int>& e, int k,int i,vector<int>&dp){
    if(i>=e.size()){
        return 0;
    }
    if(dp[i]!=-1001)
    {
        return dp[i];
    }
    return dp[i]=e[i]+maxiEnergy(e,k,i+k,dp);
}

int maximumEnergy(vector<int>& energy, int k) {
    vector<int>dp(energy.size()+1,-1001);
    int maxi=INT_MIN;
    for(int i=0;i<energy.size();i++){
    maxi=max(maxi,maxiEnergy(energy,k,i,dp));
    }
    return maxi;
        
}


int main(){
    vector<int> energy = {1, 2, 3, 4, 5};
    int k = 2;
    vector<int> dp(energy.size() + 1, -1001); 
    maxiEnergy(energy, k, 0, dp);
    cout << "Maximum Energy: " << maximumEnergy(energy, k) << endl;
    return 0;

}