#include<bits/stdc++.h>
using namespace std;
long long n,x,s=0,m=0,a,tong,tich;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("TimSo.Inp ","r",stdin);
   freopen("TimSo.Out","w ",stdout);
    cin>>x;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        tong =0;tich=1;
      while(x>0)
      {
          int a=x%10;
          if(a>0)
          {
              tich=tich*a;
              tong+=a;
          }
          x=x/10;
      }
      x=tich+tong;
    }
    cout<<x;
}
