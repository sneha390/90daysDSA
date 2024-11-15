#include <iostream>
#include <string>
#include <cctype> // For isalnum and tolower

using namespace std;


bool isPalindrome(string s) {
        int i = 0; 
        int j = s.length()-1;
        while(i<j){
            if(!isalnum(s[i])){
                ++i;
            }else if(!isalnum(s[j])){
                --j;
            }else if(tolower(s[i]) != tolower(s[j])){
                    return false;
            }else{
                ++i;
                --j;
            }
        }
        return true;
    }

    int main(){
        string s;
        cin >> s;
        if(isPalindrome(s)){
            return true;
        }else{
            return false;
        }
    }