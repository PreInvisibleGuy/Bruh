#include<bits/stdc++.h>
using namespace std;
long long a,b;
int ktra(long long n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
           return 0;
  return 1;
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("NUMBER.Inp ","r",stdin);
freopen("NUMBER.Out ","w ",stdout);
    cin>>a>>b;
    long long n=__gcd(a,b);
    if(ktra(n) and n!=1)
    {
        cout<<"YES";
        return 0;
    }
    else
        cout<<"NO";
}
