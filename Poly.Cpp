#include<bits/stdc++.h>
using namespace std;
const int mv=1e9+7;
long long tong(long long x, long long n)
{
    long long s=1,t=x;
     for(int i=1;i<=n;i++)
     {
         s=s+t;
         t=t*x;
         s=s%mv;
     }
     return s;
}
int main()
{
    int q,n,x;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Poly.Inp     ","r",stdin);
freopen("Poly.Out  ","w ",stdout);
    cin>>q;
    while(q--)
    {
        cin>>x>>n;
        cout<<tong(x,n)<<'\n';
    }
}
