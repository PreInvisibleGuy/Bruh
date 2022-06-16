#include<bits/stdc++.h>
using namespace std;
int a[500005],n;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("EraseS.Inp","r",stdin);
   freopen("EraseS.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int ans=0;
    for(int i=2;i<=n-2;i++)
        ans=max(ans,a[i+2]-a[i-1]);
    cout<<ans;
}
