#include<bits/stdc++.h>
using namespace std;
int n,m,a[200002],b[200002];
int main()
{
     // freopen("CS1.Inp","r",stdin);
   // freopen("CS1.Out","w ",stdout);
       cin>>n>>m;
    for(int i=1;i<=n;i++)
       cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    if(abs(b[m]-a[1])>abs(a[n]-b[1]))
    {
      cout<<abs(b[m]-a[1]);
    }
    else
        cout<<abs(a[n]-b[1]);
}
