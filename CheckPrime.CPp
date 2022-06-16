#include<bits/stdc++.h>
using namespace std;
int ktra(long long x)
{
    if(x<2)
        return 0 ;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
        return 0;
    return 1;
}
int main()
{
    long long a[101],n;
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CheckPrime.Inp   ","r",stdin);
freopen("CheckPrime.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        cout<<ktra(a[i])<<'\n';
    }
}
