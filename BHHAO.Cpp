#include <bits/stdc++.h>
using namespace std;
int tcs(long long x)
{
    long long s=0;
    while(x>0)
    {
        int cs=x%10;
        s=s+cs;
        x=x/10;
    }
    return s;
}
long long tuoc(long long x)
{
    long long s=0;
    for(int i=1;i<=sqrt(x);i++)
    if(x%i==0)
        s=s+i+x/i;
    long long k=sqrt(x);
    if((k*k)==x)
        s=s-k;
    return s;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("BHHAO.INP ","r",stdin);
freopen("BHHAO.OUT","w ",stdout);
    long long t,dem=0;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(tuoc(tcs(n))-tcs(n)==tcs(n))
                dem++;
    }
    cout<<dem;
}
