#include<bits/stdc++.h>
using namespace std;
long long f[10000001],base=1e9+7,n;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("JumpN.Inp  ","r",stdin);
 freopen("JumpN.Out","w",stdout);
    cin>>n;
    f[1]=1;f[2]=2;f[3]=4;
    for(int i=4;i<=n;i++)
        f[i]=(f[i-3]+f[i-2]+f[i-1])%base;
    cout<<f[n];
}
