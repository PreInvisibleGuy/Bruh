#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[1001],s;
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("UOCCHUNG.INP  ","r",stdin);
freopen("UOCCHUNG.OUT","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
     {
         cin>>a[i];
         if(i==2)
           s=__gcd(a[i],a[i-1]);
        if(i>2)
            s=__gcd(s,a[i]);
     }
     cout<<s;

}
