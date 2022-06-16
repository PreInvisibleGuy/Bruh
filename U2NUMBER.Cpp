#include<bits/stdc++.h>
using namespace std;
long long a,b,x;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("U2NUMBER.INP  ", "r", stdin);
   freopen("U2NUMBER.OUT", "w", stdout);
   cin>>x>>a>>b;
   if(a%x==0 and b%x==0)
   {
       cout<<"AB";
       return 0;
   }
   else
   {
       if(a%x==0 and b%x!=0)
       {
           cout<<"A";
           return 0;
       }
       else
       {
           if(b%x==0 and a%x!=0)
           {
               cout<<"B";
               return 0;
           }
       }
   }
   cout<<"NoAB";
}
