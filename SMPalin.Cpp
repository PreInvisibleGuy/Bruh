#include<bits/stdc++.h>
using namespace std;
long long a[10001],q,n,s,ans=0;
int main()
{

          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SMPalin.Inp     ","r",stdin);
freopen("SMPalin.Out ","w ",stdout);
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++)
        {
            s=a[i]+a[n-i+1];
            ans=max(s,ans);
        }
        cout<<ans<<'\n';
        ans=0;s=0;
    }

}

