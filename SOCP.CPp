#include<bits/stdc++.h>
using namespace std;
long long a,b,x,y;
int main()
{
    freopen("SOCP.Inp ","r",stdin);
freopen("SOCP.Out","w",stdout);
  cin>>a>>b;
   x=sqrt(a);
   if(x*x<a) x++;
   y=sqrt(b);
   cout<<y-x+1;
}

