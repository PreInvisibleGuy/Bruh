#include<bits/stdc++.h>
using namespace std;
long long n,a[101],k;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("XEPHANG.Inp ","r",stdin);
//freopen("XEPHANG.Out ","w ",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
a[n+1]=k;
sort(a+1,a+2+n);
for(int i=1;i<=n;i++)
{
    if(a[i]==k)
    {
        cout<<i<<endl;
        break;
    }
}
for(int i=1;i<=n+1;i++)
    cout<<a[i]<<' ';

}
