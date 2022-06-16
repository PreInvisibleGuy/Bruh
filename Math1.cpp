#include<bits/stdc++.h>
using namespace std;
long long a[101],b[101],s,n,c,d,e,f,ans=0,x;
int main()
{
    // freopen("Math1.Inp ","r",stdin);
    //freopen("Math1.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
     cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        s=a[i]+a[i+1]+b[i]+b[i+1];
         c=s-a[i];
         d=s-b[i];
         e=s-a[i+1];
         f=s-b[i+1];
       x=max({c,d,e,f});
       ans=max(ans,x);
    }
    cout<<ans;

}
