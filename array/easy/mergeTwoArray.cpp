#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin >> m;
    int n ;
    cin >> n;
    vector<int> arr1(m);
    for(int i = 0; i < m;i++){
        cin >> arr1[i];
    }
    vector<int>arr2(n);
    for(int j = 0; j< n ;j++){
        cin >> arr2[j];
    }

    int ind1= m -1;
    int ind2 = n -1;
    int ind3 = m + n -1;

    arr1.resize(ind3);
    while(ind2 >=0){
        if(ind1 >= 0 && arr1[ind1] > arr2[ind2]){
            arr1[ind3] = arr1[ind1];
            ind1--;
        }else{
            arr1[ind3] = arr2[ind2];
            ind2--;
        }
        ind3--;
    }

     cout << "Merged Array" << endl;

    for(int i = 0; i < m + n; i++){
        cout << arr1[i] << endl;
    }
}