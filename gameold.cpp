#include<bits/stdc++.h>
using namespace std;
long long a,b,c,e,n,s,y,x,t;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("game.INP","r",stdin);
   freopen("game.OUT","w",stdout);
      cin>>t;
       while(t--)
       {
          cin>>a>>b>>c;
           if(c%2!=0)
           {
          s=a*2;
           e=b;
          }
        if(c%2==0)
         {
         s=a;
         e=b;
        }
    x=max(s,e);
    y=min(s,e);
    n=x/y;
    cout<<n<<'\n';
}
}
