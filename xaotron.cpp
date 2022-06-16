#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001],id[1001],ans[1001];
int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("XAOTRON.INP ","r",stdin);
    freopen("XAOTRON.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
      int x=a[i];
      b[x]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>id[i];
    }
    for(int i=1;i<=n;i++)
    {
        int x=b[i];
        x=b[x];x=b[x];
        ans[x]=id[i];
    }
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<endl;

}
