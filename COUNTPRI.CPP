#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define faster ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,a,b) for(int i=a;i>=b;i--)
#define nmax 1000006
using namespace std;
ll a[nmax],dp[nmax],n,l,r;
bool nt[nmax];
void sangnt()
{
    memset(nt,true,sizeof(nt));
    nt[0]=nt[1]=false;
    for(int i=2;i*i<=nmax;i++)
        if(nt[i])
    for(int j=i*i;j<=nmax;j+=i)
        nt[j]=false;
}
int main()
{
    freopen("countpri.INP ","r",stdin);
    freopen("countpri.Out","w ",stdout);
    faster
    sangnt();
    ll t;cin>>t;
    for(int i=2;i<=nmax;i++)
    {
        dp[i]=dp[i-1];
        if(nt[i]) dp[i]++;
    }
    while(t--)
    {
        cin>>l>>r;
        cout<<dp[r]-dp[l-1]<<'\n';
    }
}
