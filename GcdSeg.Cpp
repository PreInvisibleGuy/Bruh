#include<bits/stdc++.h>
using namespace std;
long long a,b,m,n,x=-1;
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("GcdSeg.Inp ","r",stdin);
freopen("GcdSeg.Out","w",stdout);
    cin>>a>>b;
    cin>>n>>m;
    long long c=__gcd(a,b);
    for(long long i=1;i*i<=c;i++)
    {
       if(c%i==0)
       {
           if(n<=i and i<=m)
           {
                 x=max(x,i);
           }
           if(n<=c/i and c/i<=m)
              x=max(x,(c/i));
       }
    }
    cout<<x;
}
