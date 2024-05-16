#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string format="";
    format += s[8];
    format +=s[9];

    string hr = "";
    hr += s[0];
    hr += s[1];

    if(format == "PM" && hr != "12"){
        unordered_map<int , int > mp;

        int count = 13;
        for(int i = 1 ; i <= 11 ; i++){
            mp[i] = count;
            count++;
        }
    
        // stoi (String to integer)
        int x = stoi(hr); 
        int temp = mp[x];
        string newhr = to_string(temp);
        s[0] = newhr[0];
        s[1] = newhr[1];    

    }
    
    else if(format == "AM" && hr == "12"){
            s[0] = '0';
            s[1] = '0';
        }

        
        return s;
    }

    



int main()
{

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}
