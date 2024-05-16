#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
    bool flag = 0;
    for(int i = p ; i <= q ; i++){
        string s = to_string(i);
        int size_s = s.size();
        
        long long square_num = (long long)i * (long long)i;
        
        string s1 = to_string(square_num);
            
        string leftpart ="";
        string rightpart ="";
        
        if(s1.size() == 1){
            leftpart = s1;
        }else {
            leftpart = s1.substr(0,s1.size() - size_s);
            rightpart = s1.substr(s1.size() - size_s);
        }
        
        if(rightpart == ""){
            long long left = stoi(leftpart);
            if(left == i){
                cout << i << " ";
                flag = 1;
            }
            
        }
        else{
            long long left = stoi(leftpart);
            long long right = stoi(rightpart);
            
            if(left+right == i){
                cout << i << " ";
                flag = 1;   
            }
        }
         
    }
    if(flag == 0){
        cout << "INVALID RANGE";
    }

}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
