#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],s[1000001],ans=0,x;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Speed.INP   ","r",stdin);
freopen("Speed.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]=abs(a[i]);
        }
    s[1]=a[1];
    for(int i=2;i<=n;i++)
    {
      s[i]=max(s[i-1],a[i]);
    }
    for(int i=2;i<=n;i++)
    {
        x=a[i]*s[i-1];
        ans=max(ans,x);
    }
    cout<<ans;

}
