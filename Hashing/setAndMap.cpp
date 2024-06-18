#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> b;
    b.insert(2);
    b.insert(5);
    b.insert(5);

    if(b.find(2) != b.end()){
        cout << "Found";
    }else{
        cout << "Not Found";
    }

    set<int>a;
    a.insert(2);
    a.insert(5);
    a.insert(5);

    if(a.find(5) != a.end()){
        cout << "Found";
    }else{
        cout << "NOt found";
    }

    unordered_map<int,int> g;
    g[2] = 1;
    g[4] = 4;
    if(g.find(2) != g.end()){
        cout << "found";
    }else{
        cout << "Not found";
    }

    cout << g[4] << endl;

}