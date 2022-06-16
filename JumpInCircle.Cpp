#include<bits/stdc++.h>
using namespace std;
long long   n,m,s=0,x=0;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("JumpInCircle.Inp","r",stdin);
    freopen("JumpInCircle.Out","w ",stdout);
     cin>>n>>m;
     for(int i=1;i<=m;i++)
     {
         s=s+i;
         if(s>=m+1)
              s=s-(m+1);
         x++;
         if(x==n)
         {

             cout<<s;
             return 0;
         }


     }

}
