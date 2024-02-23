#include <iostream>

using namespace std;

string timeConversion(string s) {
    if(s[8] == 'A'){
        if(s[0] == '1' && s[1] == '2'){
            s[0] = s[1] = '0';
        }
    }
    else{
        if(s[1] == '8'){
            s[0] = '2';
            s[1]  = '1';
        }
        else if(s[1] == '9'){
            s[0] = '2';
            s[1] = '1';
        }
        else if(!(s[0] == '1' && s[1] == '2')){
            s[0] += 1;
            s[1] += 2;
        }
    }
    s.erase(8,2);
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
