#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long a,b,s=0,x=0,n,m;
    freopen("ANHEM.INP","r",stdin);
    freopen("ANHEM.OUT","w",stdout);
     cin>>a>>b;
    for(int i=2;i<=a/2;i++)
        if(a%i==0)
           s=s+i;
    for(int i=2;i<=b/2;i++)
        if(b%i==0)
          x=x+i;
     if(s==x and s!=0)
     {
         cout<<"YES";
         return 0;
     }
    cout<<"NO";



}
