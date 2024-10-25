#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int whatAmI(int x , int y){
    if(y == 0){
        return 0;
    }

    int z = whatAmI(x, int(y/2));
    cout << x << endl;
    cout << y << endl;
    if(y % 2 == 0){
        return 2 * z;
    }else{
        return x + 2 * z;
    }
}

int main(){
    int x , y;
    cin >> x >> y;
    cout << whatAmI(x,y) << endl;
}