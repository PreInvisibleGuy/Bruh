#include<bits/stdc++.h>
using namespace std;
int solve(long long n, long long a)
{
    long long s=n*(n+1)/2;
    if(s==a)
         return 1;
     long long  u=s-a;
     if(u%2!=0)
         return 0;
     long long x=u/2;
     if(x>=2 and x<=n)
     {
         return -x;
     }
     return 0;
}
int main()
{
    long long t,s,n,a,x;
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SumContinue.Inp  ","r",stdin);
freopen("SumContinue.Out","w ",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
       cout<<solve(n,a)<<'\n';
    }
}
