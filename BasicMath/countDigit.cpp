// https://www.geeksforgeeks.org/problems/count-digits5716/1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int N){
    string strN = to_string(N);
    int count = 0;

    for(char digit_char : strN){
        int digit = digit_char - '0';
        if(digit != 0 && N % digit ==0){
            count ++;
        }
    }
    return count;
}

int main(){
    int N;
    cin >> N;
    int result = evenlyDivides(N);
    cout << result << endl;
    return 0;
}