#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100001],b[100001];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("GCDSEQUEN.INP   ","r",stdin);
  freopen("GCDSEQUEN.OUT ","w ",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i];
    sort(a+1,a+1+n);
    long long e=a[2]-a[1];
    for(int i=3;i<=n;i++)
        e=__gcd(e,a[i]-a[1]);
    for(int i=1;i<=m;i++)
        cout<<__gcd(a[1]+b[i],e)<<'\n';

}

