#include<bits/stdc++.h>
using namespace std;
long long n,a[10001],q,k,s,ans=0,x;
int main()
{
 freopen("CXSUM.Inp   ","r",stdin);
freopen("CXSUM.Out ","w ",stdout);
    cin>>n;
    cin>>q;
    for(int i=1;i<=n;i++)
         cin>>a[i];
         int l,r,m;
for(int t=1;t<=q;t++)
{
    cin>>x;
     for(int i=1;i<n;i++)
    {
        l=i+1;r=n;
        while(l<=r)
        {
            m=(l+r)/2;
            if(a[i]+a[m]==x)
            {
                ans++;break;
            }
            if(a[i]+a[m]<x)
                l=m+1;
            else
                r=m-1;
        }
    }
    cout<<ans<<'\n';
    ans=0;
}

}
