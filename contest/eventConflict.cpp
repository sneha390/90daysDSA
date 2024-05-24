// 2446. Determine if Two Events Have Conflict

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int converter(string s, int i){
        return (s[i] - '0')*10+ (s[i+1]-'0');
    }
bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int hr1 = converter(event1[0],0);
        int hr2 = converter(event1[1],0);
        int min1 = converter(event1[0],3);
        int min2 = converter(event1[1],3);
        
        int hr3 = converter(event2[0],0);
        int hr4 = converter(event2[1],0);
        int min3 = converter(event2[0],3);
        int min4 = converter(event2[1],3);
        
        int t1= hr1*60+min1;
        int t2= hr2*60+min2;
        int t3= hr3*60+min3;
        int t4= hr4*60+min4;
        
        if((t3>=t1 && t2>=t3) || (t1>=t3 && t4>=t1)){
            return true;
        }
        return false;
}

int main(){
    vector<string> event1;
    vector<string>event2;
    event1 = {"01:15","02:00"};
    event2 = {"02:00","03:00"};
    haveConflict(event1, event2);
    if(haveConflict(event1,event2)== true){
        cout << "true" << endl;
    }else{
        cout<< "false" <<endl;
    }
    return 0;
}