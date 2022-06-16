#include<bits/stdc++.h>
using namespace std;
int n;
double s;
int main()
{
          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("NestSqrt.Inp     ","r",stdin);
freopen("NestSqrt.Out ","w ",stdout);
    cin>>n;
    s=sqrt(2);
  while(n>1)
  {
      s=sqrt(2+s);
      n--;
  }
  cout<<setprecision(6)<<fixed<<s;;


}
