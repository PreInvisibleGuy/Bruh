#include<bits/stdc++.h>
using namespace std;
pair<int ,int> a[200002];
int n;
int main()
{

     //freopen("SortPos.Inp","r",stdin);
   // freopen("SortPos.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
     {
         cin>>a[i].first;
         a[i].second=i;
     }
  sort(a+1,a+1+n);
  for(int i=1;i<=n;i++)
     cout<<a[i].second<<' ';
}
