#include<bits/stdc++.h>
using namespace std;
int n,d[1001],t,ans;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CPHONE.INP", "r", stdin);
    freopen("CPHONE.OUT", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        d[t]++;
    }
    ans=d[1];
    for(int i=2;i<=1000;i++)
        if(ans<d[i])
           ans=d[i];
    for(int i=1;i<=1000;i++)
    {
        if(d[i]==ans)
            cout<<i<<'\n';
    }

}
