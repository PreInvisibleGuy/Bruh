#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3,x,e;
    long long s=0;
     freopen("CTG1.Inp","r",stdin);
    freopen("CTG1.Out","w",stdout);
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
      for(int a=x1;a<=y1;a++)
         for(int b=max(a,x2);b<=y2;b++)
         {
           if(0<a and b<=y3)
           {
               x=min(a+b-1,y3);
               e=max(b,x3);
               s=s+x-e+1;
           }
         }
   cout<<s;
        }
