#include<bits/stdc++.h>
using namespace std;
long long n,a[200003],k,s=0,x=0,sum[200003];
int main()
{
       freopen("RemainK.Inp","r",stdin);
   freopen("RemainK.Out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        sum[i]=sum[i-1]+a[i];
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
    {
        s=0;
         s=sum[j]-sum[i-1];
        if(s%k==(j-i+1))
            x=x+1;

    }
    cout<<x;
}
