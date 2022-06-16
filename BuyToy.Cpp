#include<bits/stdc++.h>
using namespace std;
long long a[100001],n,l,r,s=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("BuyToy.Inp ","r",stdin);
freopen("BuyToy.Out","w ",stdout);
    cin>>n>>l>>r;
    for(int i=1;i<=n;i++)
        cin>>a[i];
        for(int i=1;i<=n;i++)
        {
      if(a[i]>=l and a[i]<=r)
         s++;
        }
      cout<<s;

}
