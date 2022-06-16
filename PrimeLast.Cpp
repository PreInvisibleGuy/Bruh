#include<bits/stdc++.h>
using namespace std;
long long n,a[1001],s=0;
int ktra(long long x)
{
    if(x<2)
        return 0;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
        return 0;
    return 1;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("PrimeLast.Inp  ","r",stdin);
freopen("PrimeLast.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(ktra(a[i])==1)
            s=s+a[i]%10;
    }
    cout<<s;
}
