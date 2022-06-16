#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s=1,x=0,n;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        s=1;
        for(int j=2;j*j<i;j++)
        {
         if(i%j==0)
         {
              s=s+j;
              n=i/j;
              if(n!=j)
              {
                  s=s+n;
              }
         }
        }
        if(s>i)
        {
            x=x+i;
        }

    }
    cout<<x;
}
