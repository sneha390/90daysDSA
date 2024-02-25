#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , i;
    int remind = 0; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i]>=38){
            remind = 5-(arr[i] % 5);
            if(remind < 3){
                arr[i] = arr[i] + remind;
            }
        }
        cout<< arr[i] <<endl;
    }
    return 0;

}