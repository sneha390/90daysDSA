#include <iostream>
using namespace std;

int gcd(int a , int b ){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main(){
    int a = 20;
    int b = 5;
    cout << gcd(20,5);
}