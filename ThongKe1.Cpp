#include<bits/stdc++.h>
using namespace std;
int n,a[1001],dem=1;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("ThongKe1.INP  ","r",stdin);
freopen("ThongKe1.OUT ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=2;i<=n;i++)
        if(a[i]!=a[i-1])
          dem++;
    cout<<dem;

}
