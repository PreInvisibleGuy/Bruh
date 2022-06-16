#include<bits/stdc++.h>
using namespace std;
long long n,t,a[1000001],s[1000001],x;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("SUMPREFIX.INP  ","r",stdin);
  freopen("SUMPREFIX.Out","w",stdout);
    cin>>n>>t;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    s[1]=a[1];
    for(int i=2;i<=n;i++)
        s[i]=s[i-1]+a[i];
    while(t--)
    {
        cin>>x;
        cout<<s[x]<<'\n';
    }
}
