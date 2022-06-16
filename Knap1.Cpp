#include<bits/stdc++.h>
using namespace std;
long long n,m,ans=0,mv;
long long w[20],c[20];
void solve(int x)
{
    bitset<20> b(x);
    long long ww=0,cc=0;
    for(int i=0;i<=n-1;i++)
        if(b[i]==1)
    {
        ww=ww+w[i];
        cc=cc+c[i];
    }
    if(ww<=m)
        ans=max(ans,cc);
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Knap1.Inp   ","r",stdin);
freopen("Knap1.Out ","w ",stdout);
    cin>>n>>m;
    for(int i=0;i<=n-1;i++)
    {
       cin>>w[i];
       cin>>c[i];
    }
    mv=1<<n;
    for(int i=1;i<mv;i++)
        solve(i);
    cout<<ans;


}

