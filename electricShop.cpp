#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m,i,j,budget;
cin>>budget>>n>>m;
int keyboard[n];
int usb[m];


for(i=0;i<n;i++)
{
    cin>>keyboard[i];
}
for(i=0;i<m;i++)
{
    cin>>usb[i];
}


   int max = 0;
   int sum;
 
 for(i=0;i<n;i++)
 {
     for(j=0;j<m;j++)
     {
        sum=keyboard[i]+usb[j];
        if(sum>=max && sum <= budget)
        {
        max=sum;
        }
        }
        }
        if(max==0){
            cout<<"-1"<<endl;
        }
        else{
             cout<<max<<endl;
        }
 
}