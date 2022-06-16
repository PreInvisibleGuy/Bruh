#include<bits/stdc++.h>
using namespace std;
 long long a[200001],b[200001],n,q,s[200001],x;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  freopen("Prefixsum.Inp ","r",stdin);
  freopen("Prefixsum.Out","w",stdout);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    s[1]=a[1];
    for(int i=2;i<=n;i++)
        s[i]=s[i-1]+a[i];
    for(int i=1;i<=q;i++)
    {
        cin>>x;
      cout<<s[x]<<'\n';
    }

}
