#include<bits/stdc++.h>
using namespace std;
int n,m,s[101],dem=0;
pair<int,int> a[101];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("NGANHANG.INP  ","r",stdin);
freopen("NGANHANG.OUT","w ",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
      cin>>a[i].first;
       a[i].second=i;
    }
    sort(a+1,a+1+n);
    for(int i=n;i>=1;i--)
    {
        int x=m/a[i].first;
        dem=dem+x;
        s[a[i].second]=x;
        m=m-x*a[i].first;
    }
    cout<<dem<<'\n';
    for(int i=1;i<=n;i++)
        cout<<s[i]<<' ';

}
