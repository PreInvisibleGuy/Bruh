#include<bits/stdc++.h>
using namespace std;
long long  n,a[200001];
map<int,int> mp;
int main()
{
ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("DDNOSORT.INP ","r",stdin);
   freopen("DDNOSORT.OUT","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
      cin>>a[i];
    for(int i=1;i<=n;i++)
       {
         if(mp[a[i]]==0)
         {
             cout<<a[i]<<' ';
             mp[a[i]]=1;
         }
             }
}
