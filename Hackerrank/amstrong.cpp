#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout << " enter the number x = ";
    cin >> x;
    int original = x;
    int temp = x;
    int count = 0;

    while (temp != 0){
        
        count ++;
        temp = temp /10;
    }
    cout <<"Count = " << count << endl;

    int sum = 0;
    temp = x;
    while (x != 0){
        int digit = x % 10;
        sum = sum  + pow(digit , count);
        x = x / 10;
    }

    cout << "Sum of digits = "<< sum << endl;

    if( original == sum){
        cout<<"Amstrong" << endl;
    }else{
        cout << "Not Amstrong" <<endl;
    }
    

    return 0;
}