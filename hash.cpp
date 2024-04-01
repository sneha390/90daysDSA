#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>b;
    b.insert(2);
    b.insert(5);
    b.insert(5); 
    //  inserting 5 double time will not effect 

    //  set looks like { 2, 5}

    if(b.find(2) != b.end()){
        cout << " Found";
    }else{
        cout << "Not Found";
    }
    cout << "\n";


    set<int> g;
    g.insert(2);
    g.insert(5);
    g.insert(5); 
    //  inserting 5 double time will not effect 

    //  set looks like { 2, 5}

    if(g.find(2) != g.end()){
        cout << " Found";
    }else{
        cout << "Not Found";
    }
    cout << "\n";


    cout << "====================================================" << endl;

    unordered_map<int , int > d;
    // inserting nummbers in map with their frequencies
    d[2] = 1;
    d[5] = 2;

    // map looks like 
    /*
    Key  --> Value
    2    --> 1
    5    --> 2

    */
//    check whether 2 as key exist in map or not 

if(d.find(2) != d.end()){
    cout << "Found";
}
else{
    cout << " Not found";
}
    cout<<"\n";
    
    //check the frequency of key "5"
    cout<<d[5];
    cout<<"\n";
    
    
    map <int,int> kk ; 
    //inserting numbers in the map with their frequencies 
    kk[2] = 1 ;
    kk[5] = 3 ;
    
    //map looks like this : 
  /*  
    Key   Value
    2-->  1
    
    5-->  2
    */
    //checks if "2" as key exists in the map or not
    if(kk.find(2)!=kk.end()){
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }
    cout<<"\n";
    
    //check the frequency of key "5"
    cout<<kk[5];
    cout<<"\n";
    
    
    
    return 0 ; 




}