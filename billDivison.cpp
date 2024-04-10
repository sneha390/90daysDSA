#include <bits/stdc++.h>
using namespace std;


int main()
{
   long long int sum=0;
    
    long long int n,k,i,b,act;
    cin>>n>>k;
  
    long long int bill[n];
    for(i=0;i<n;i++)
    {
        cin>>bill[i];
        sum=sum+bill[i];
    }
    cin>>b;
    act=sum-bill[k];
    act=act/2;
    
if(b==act)
{
    cout<<"Bon Appetit";
}
else{
    cout<<b-act;
}
    
    return 0;
}


