#include<bits/stdc++.h>
using namespace std;
long long n,a[5005],dem=0;
int main()
{
    freopen ("BAI3.inp","r",stdin);
    freopen ("BAI3.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            for(int k=j+1;k<=n;k++)
    {
        long long s=a[i]+a[j]+a[k];
        long long m=max({a[i],a[j],a[k]});
        if(s==2*m)
              dem++;
    }
    cout<<dem;

}
