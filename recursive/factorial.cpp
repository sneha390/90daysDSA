#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    return n * factorial(n - 1);
    
}

int main(){
    int n;
    cin >> n;
    cout << "factorial - " <<factorial(n) << endl;
}