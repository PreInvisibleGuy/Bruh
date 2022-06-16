#include<bits/stdc++.h>
using namespace std;
long long  n,a[200005],q,x;
map<int,int> mp;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
 //  freopen("TK1.Inp ","r",stdin);
   //freopen("TK1.Out","w ",stdout);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
      cin>>a[i];
    for(int i=1;i<=n;i++)
        mp[a[i]]++;
   while(q--)
   {
       cin>>x;
      cout<<mp[x]<<'\n';
   }
}
