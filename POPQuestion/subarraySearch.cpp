#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


string balancedSums(vector<int> arr) {
    int n = arr.size();
    vector<int>prefix(n,0);
    prefix[0] = arr[0];
    
    for(int i = 1 ; i < n; i++){
        prefix[i] = arr[i] + prefix[i-1];
    }
    bool flag = 0;
    for(int i = 0; i < n ; i++){
        int left = 0; 
        int right = 0;
        if(i == 0){
            left = 0;
            right = prefix[n-1] - prefix[i];   
        }else if(i == n-1){
                left = prefix[i -1];
                right = 0;
        }
        else{
            left = prefix[i-1];
            right = prefix[n-1] - prefix[i];
        }
        if(left == right){
            flag = 1;
            break;
        }
    }
    
    string ans= "";
    if(flag == 1){
        ans = "YES";
    }
    else{
        ans = "NO";
    }
    
    
    return ans;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string T_temp;
    getline(cin, T_temp);

    int T = stoi(ltrim(rtrim(T_temp)));

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split(rtrim(arr_temp_temp));

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        string result = balancedSums(arr);

        fout << result << "\n";
    }

    fout.close();

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
