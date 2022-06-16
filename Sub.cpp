#include<bits/stdc++.h>
using namespace std;
long long m,M;
int n,a[100001],s[100001];
void sub12()
{
    long long ans=0;
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
    {
        long long x=s[j]-s[i-1];
        if(m<=x and x<=M)
            ans++;
    }
    cout<<ans;
}
void sub3()
{
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        int io=0,jo=0,l,r,mi;
        l=i;
        r=n;
        while(l<=r)
        {
            mi=(l+r)/2;
            if(s[mi]-s[i-1]>=m)
            {
                io=mi;r=mi-1;

            }
            else
                l=mi+1;
        }
        l=i;r=n;
        while(l<=r)
            {
                mi=(l+r)/2;
                if(s[mi]-s[i-1]<=M)
                {
                    jo=mi;
                    l=mi+1;
                }
                else
                    r=mi-1;
            }
            if(io>0 and jo>0 and jo>=io)
                ans+=(jo-io+1);
            }
        cout<<ans;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("Sub.Inp","r",stdin);
     freopen("Sub.Out","w",stdout);
    cin>>n>>m>>M;
    for(int i=1;i<=n;i++)
        cin>>a[i];
  for(int i=1;i<=n;i++)
    s[i]=s[i-1]+a[i];
    if(n<=5000)
        sub12();
    else
        sub3();
}
