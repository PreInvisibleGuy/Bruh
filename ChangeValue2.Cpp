#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n=3,b,c,a,x,y,z;
    for(int t=1;t<=3;t++)
    {
   cin>>a>>b>>c;
   x=abs(a-c);
   y=abs(a-b);
   z=abs(b-c);
   if(x+y+z==0 or x+y+z==2 or x+y+z==4)
      cout<<"Yes"<<endl;
   else
     cout<<"No"<<endl;

   }
}

