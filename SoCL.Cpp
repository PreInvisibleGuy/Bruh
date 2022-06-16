#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[7],n=5,b[6],s=0,x=0;
      freopen("SoCL.Inp","r",stdin);
    freopen("SoCL.Out","w",stdout);
    for(int i=1;i<=6;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    for(int i=1;i<=6;i++)
        s=s+a[i];
    for(int i=1;i<=n;i++)
        x=x+b[i];
    cout<<s-x;
}
