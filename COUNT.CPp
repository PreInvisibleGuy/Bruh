#include<bits/stdc++.h>
using namespace std;
int n,q,x,a[100001],s[100001];
int main()
{
      ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("COUNT.Inp","r",stdin);
    freopen("COUNT.Out","w",stdout);
    cin>>n>>x>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(a[i]>0)
    {
        s[i]=s[i-1]+(a[i]<x);
    }
    else
        s[i]=s[i-1];
    while(q--)
    {
        int l,r;
        cin>>l>>r;
    cout<<s[r]-s[l-1]<<'\n';

    }
}
