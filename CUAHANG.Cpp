#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[1000001];
long long n,s=0;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("CUAHANG.Inp  ","r",stdin);
//freopen("CUAHANG.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    for(int i=1;i<=n;i++)
    {
         s=s+a[i].first;
    }
    sort(a+1,a+1+n);
    cout<<s<<'\n';
    cout<<a[n].second<<'\n';


}
