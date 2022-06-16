#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s=1,x=1;
    cin>>a>>b;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
              s=s+i;
    }
    }
    for(int i=2;i<b;i++)
    {
        if(b%i==0)
        {
            x=x+i;
        }

    }
   if(s==b and x==a)
   {
       cout<<"YES";
       return 0;
   }
   cout<<"NO";

}
