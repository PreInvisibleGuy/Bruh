#include<bits/stdc++.h>
using namespace std;
unsigned long n,s=0,x=0;
int dem(long long n)
  {
      long long  dem=0;
      for(int i=1;i*i<=n;i++)
      {
          if(n%i==0)
          {
              dem=dem+1;
          }
      }
      return dem;

  }
int main()
{

    cin>>n;
   for(long long  i=1;i<=n;i++)
   {
       s=dem(i);
       if(s==3)
       {
           x=x+1;
       }
     s=0;

   }

    cout<<x;
}

