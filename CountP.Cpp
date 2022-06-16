#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],b[200005],x,c[200005],ans=0;
map<int,int> mp;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CountP.Inp   ","r",stdin);
freopen("CountP.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    for(int i=1;i<=n;i++)
         c[i]=a[i]-b[i];
 for(int j=1;j<=n;j++)
 {
     ans+=mp[-c[j]];
     mp[c[j]]++;
 }
 cout<<ans;

}
