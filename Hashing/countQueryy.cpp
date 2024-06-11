#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    vector<int>arr(n);
    cout << "Enter the elements" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int q;
    cout << "Enter the number of query" << endl;
    cin >> q;
    for(int i = 0; i < q; i++){
        int query;
        cout << "Enter the Query = ";
        cin >> query;

        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == query){
                count = count + 1;
            }
        }
        cout << query << " == " << count << endl;
    }
}