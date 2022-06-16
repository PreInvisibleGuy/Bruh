#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans,r,x,y,a,b,v;
    freopen("CheckInc.Inp ","r",stdin);
    freopen("CheckInc.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        cin>>a>>b;
        if(y-x<0)
           {
               cout<<"No"<<endl;
               continue;
           }
        if(y-x==0)
           {
               cout<<"0"<<endl;
               continue;
           }
        ans=1e6;
     for(int u=0;u<=(y-x)/a;u++)
     {
         r=(y-x-u*a);
         if(r%b==0)
         {
             v=r/b;
             ans=min(ans,u+v);
         }

     }
     if(ans==1e6)
     {
         cout<<"No"<<endl;
     }
     else
        cout<<ans<<endl;
    }
}
