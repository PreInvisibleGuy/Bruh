#include<bits/stdc++.h>
using namespace std;
int t,a,b,s,sn;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("PopCandy.Inp   ","r",stdin);
freopen("PopCandy.Out","w ",stdout);
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
       s=a+b;
       if(s%3>0)
       {
           cout<<"No"<<'\n';
           continue;
       }
       sn=s/3;
       if(a>=sn and b>=sn)
         cout<<"Yes"<<endl;
       else
          cout<<"No"<<endl;


    }
}
