#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string dayOfProgrammer(int year){
    int total_day = 0;

    if(year < 1918){
        total_day = 243;
        if(year%4 == 0){
            total_day += 1;
        }
    }

    else if(year == 1918){
        total_day = 230;
        if(year % 4 == 0 && year % 100 != 0){
            total_day += 1;
        }
    }
    else if(year > 1918){
        total_day = 243;
        if(year % 400 == 0){
            total_day += 1;
        }
        else if((year % 4 )== 0 && (year % 100) != 0){
            total_day += 1;
        }
    }

    string ans = "";
    int day = 256 - total_day;
    string d = to_string(day);
    string y = to_string(year);  

    if(d.size() == 2){
        ans += d;
    }else{
        ans += "0";
        ans += d;
    }

    ans += ".";
    ans += "09.";
    ans += y;

    return ans;
}

int main(){
    int year;
    cout << "Enter the year between 1700 to 2700"<< endl;
    cin >> year;

    string result = dayOfProgrammer(year);
    cout<< result;
    
}