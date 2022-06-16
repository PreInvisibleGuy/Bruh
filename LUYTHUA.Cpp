#include<bits/stdc++.h>
using namespace std;
const long long mv=1e9+7;
long long a,n,q=1,ds;
long long mu(long long a,long long n)
{
   if(n==0)
     return 1;
   long long tam=mu(a,n/2);
   tam=(tam*tam)%mv;
   if(n%2==1)
  tam=(tam*(a%mv))%mv;
   return tam;
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("LUYTHUA.Inp  ","r",stdin);
freopen("LUYTHUA.Out ","w ",stdout);
    cin>>a>>n;
    cout<<mu(a,n);
}
