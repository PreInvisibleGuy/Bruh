#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100001],u,v,s;
    freopen("MaxUV.Inp","r",stdin);
    freopen("MaxUV.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>u>>v;
    s=a[u];
    for(int i=u;i<=v;i++)
          if(s<a[i])
               s=a[i];
    cout<<s;

}
