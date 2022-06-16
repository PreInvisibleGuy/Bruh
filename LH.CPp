#include<bits/stdc++.h>
using namespace std;
double n,x,y;
int main()
{
          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("LH.Inp   ","r",stdin);
freopen("LH.Out ","w ",stdout);
      cin>>n>>x>>y;
      double s=y*y*3.14,s1=x*x*3.14;
      s=s*n;
      if(s<s1)
      {
          cout<<"YES";
      }
      else
         cout<<"NO";
}
