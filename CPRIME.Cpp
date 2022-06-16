#include<bits/stdc++.h>
using namespace std;
long long check(long long x)
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
  freopen("CPRIME.INP ","r",stdin);
freopen("CPRIME.OUT","w ",stdout);
    long long n;
    cin>>n;
    long long m=n,x=m%10;
    m=m/10;
    while(m>0)
    {
        int t=m%10;
        x=x*10+t;
        m=m/10;
    }
    if(check(x)==1 and check(n)==1)
        cout<<1;
    else
        cout<<0;

}
