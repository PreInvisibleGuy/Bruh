#include<bits/stdc++.h>
using namespace std;
int n,a[200005],l[200005],r[200005],q;
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SumMaxI.Inp  ","r",stdin);
freopen("SumMaxI.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    l[1]=a[1];
    for(int i=2;i<=n;i++)
        l[i]=max(0,l[i-1])+a[i];
    r[n]=a[n];
    for(int i=n;i>=1;i--)
        r[i]=a[i]+max(0,r[i+1]);
        int i,ans;
    cin>>q;
    while(q--)
    {
        cin>>i;
        ans=l[i]+r[i]-a[i];
        cout<<ans<<'\n';

    }
}
