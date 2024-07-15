#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void insert(vector<int>&vec , int temp){
    if(vec.size() == 0 || vec[vec.size()-1] <= temp){
        vec.push_back(temp);
        return;
    }
    int value = vec[vec.size()-1];
    vec.pop_back();
    insert(vec,temp);
    vec.push_back(value);
    return;

}
void sort(vector<int>&vec){
    if(vec.size() == 0){
        return ;
    }
    int temp = vec[vec.size() - 1];
    vec.pop_back();
    sort(vec);
    insert(vec,temp);
}


int main(){
    vector<int>vec;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec);
    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}