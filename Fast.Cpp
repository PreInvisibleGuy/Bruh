#include<bits/stdc++.h>
using namespace std;
long long x1,x2,x3,x4,x5,x6;
long long y1,y2,y3,y4,y5,y6;
long long z1,z2,z3,z4,z5,z6;
int main()
{    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Fast.Inp   ","r",stdin);
freopen("Fast.Out ","w ",stdout);
   cin>>x1>>y1>>z1;
   cin>>x2>>y2>>z2;
   cin>>x3>>y3>>z3;
   cin>>x4>>y4>>z4;
   cin>>x5>>y5>>z5;
   cin>>x6>>y6>>z6;
  long long n,m,q;
  n=min({x1+x2,y1+y2,z1+z2});
  m=min({x3+x4,y3+y4,z3+z4});
  q=min({x5+x6,y5+y6,z5+z6});
  cout<<n+m+q<<endl;
   n=max({x1+x2,y1+y2,z1+z2});
  m=max({x3+x4,y3+y4,z3+z4});
  q=max({x5+x6,y5+y6,z5+z6});
  cout<<n+m+q;

}
