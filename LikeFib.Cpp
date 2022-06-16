#include<bits/stdc++.h>
using namespace std;
long long n,f[1000001],m=2019;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("LikeFib.Inp   ","r",stdin);
  freopen("LikeFib.Out","w",stdout);
    cin>>n;
    f[1]=f[2]=1;
    for(long long i=3;i<=n;i++)
    {
    f[i]=(f[i-1]%m+2*f[i-2]%m)%m;
    }
    cout<<f[n]%2019;
}

