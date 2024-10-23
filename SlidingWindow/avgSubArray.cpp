#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n , k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
     float sum = 0.0;
    
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    
    cout << sum / k << " ";
    
    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k]; 
        cout << sum / k << " ";
    }
    
    return 0;
}
