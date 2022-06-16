#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long x,s=1,n;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Product.Inp ","r",stdin);
   freopen("Product.Out","w ",stdout);
     cin>>x;
     while(x>9)
     {
         s=1;
         while(x>0)
         {
            n=x%10;
            if(n>0)
            {
                s=s*n;
            }
            x=x/10;

         }

x=s;

     }
     cout<<x;



}
