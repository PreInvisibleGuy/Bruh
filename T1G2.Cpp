#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long a,b,c,s,x,d;
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("T1G2.Inp   ","r",stdin);
freopen("T1G2.Out ","w ",stdout);
   cin>>a>>b;
   s=max(a,b);
   x=min(a,b);
    c=s-x;
    if(c%2==0)
    {
        cout<<c/2;
    }
    else
    {
        d=(c-1)/2;
        cout<<d+1;
    }
}
