#include<bits/stdc++.h>
using namespace std;
long long  n,k,v,L,u;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("MoveRobot.Inp ","r",stdin);
    freopen("MoveRobot.Out","w ",stdout);
     cin>>n>>k;
     v=1;
     for(int i=1;i<=k;i++)
     {
         cin>>L>>u;
         if(L==1)
         {
             v=v+u;
             v=v%n;
             if(v==0)
                v=n;
         }
      if(L==2)
         {
             v=v-u;
                if(v<1)
                  v=v+n;
      }
      cout<<v<<endl;
     }


}

