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