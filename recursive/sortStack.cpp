#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &s , int temp){
    if(s.size() == 0 || s.top() <= temp){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s,temp);
    s.push(val);

    return;
}

void sort(stack<int> &s){
    if(s.size() == 1){
        return;
    }

    int temp = s.top();
    s.pop();
    sort(s);
    insert(s,temp);
    return ;
}

void display(stack<int> &s){
    stack<int> S2;
    while(!s.empty()){
        S2.push(s.top());
        s.pop();
    }
    
    while(!S2.empty()){
        cout << S2.top() << " ";
        s.push(S2.top());
        S2.pop();
    }
    cout << endl;
}

int main(){
    stack<int> s;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        s.push(x);
    }

    sort(s);
    display(s);
    
}

