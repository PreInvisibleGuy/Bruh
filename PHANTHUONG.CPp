#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001],m;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("PHANTHUONG.INP ","r",stdin);
  freopen("PHANTHUONG.OUT ","w ",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    int s=max({a[n-1]+a[n]+b[m]+b[m-1],a[n]+b[m-2]+b[m-1]+b[m],a[n-2]+a[n-1]+a[n]+b[m]});
    cout<<s;
}
