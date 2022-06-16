#include<bits/stdc++.h>
using namespace std;
long long n,b[101];
pair<int,int> a[100001];
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("marathon.inp","r",stdin);
   freopen("marathon.out","w",stdout);
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>a[i].first;
       a[i].second=i;
   }
   sort(a+1,a+1+n);
   for(int i=1;i<=4;i++)
    b[i]=a[i].second;
    sort(b+1,b+1+4);
    for(int i=1;i<=4;i++)
          cout<<b[i]<<' ';
}
