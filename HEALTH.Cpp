#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int> a[200002];
int main()
{
      ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("HEALTH.INP","r",stdin);
    freopen("HEALTH.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
   {
       cin>>a[i].first;
       a[i].second=i;
   }
   sort(a+1,a+1+n);
   if(a[1].first!=a[2].first)
   {
       cout<<a[1].second;
       return 0;
   }
   a[n+1].first=a[n].first+1;
   for(int i=2;i<=n;i++)
   {
       if(a[i-1].first < a[i].first and a[i].first<a[i+1].first)
       {
           cout<<a[i].second;return 0;
       }
   }
   cout<<-1;



}

