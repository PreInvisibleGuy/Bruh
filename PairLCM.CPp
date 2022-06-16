#include<bits/stdc++.h>
using namespace std;
long long n,b,p,ans=0,gcd;
int main()
{

          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("PairLCM.Inp ","r",stdin);
freopen("PairLCM.Out ","w ",stdout);
    cin>>n;
    for(long long a=n/2;a>=1;a--)
    {
        b=n-a;
     gcd=__gcd(a,b);
     p=(a*b)/gcd;
     ans=max(ans,p);
     if(gcd==1)
        break;
    }
    cout<<ans;
}
