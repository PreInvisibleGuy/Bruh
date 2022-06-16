#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,k,d,e;
        freopen("MoveLeftRight.Inp","r",stdin);
     freopen("MoveLeftRight.Out","w",stdout);
    cin>>x>>k>>d;
    x=abs(x);
      e=x/d;
    if(k>e)
     {
        x=x-d*e;
         k=k-e;
         if(k%2==0)
          {
           cout<<x;
           return 0;
         }
         else
       {
          cout<<abs(x-d);
          return 0;
       }
     }
   else
     {
        cout<<x-k*d;
     }

}
