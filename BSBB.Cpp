#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c,s,dem=0;
int ktra(int x)
{
    int s=0;
    for(int i=1;i*i<=x;i++)
    {
     if(x%i==0)
     {
         if(i*i==x)
            s=s+1;
         else
            s=s+2;
     }
    }
    return s;
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("BSBB.INP","r",stdin);
   freopen("BSBB.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     s=n-i;
     dem=dem+ktra(s);
    }
    cout<<dem;
}
