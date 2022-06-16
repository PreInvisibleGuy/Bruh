#include<bits/stdc++.h>
using namespace std;
int ktra(int n)
{
         if(n==0)
  {
      return 0;
  }
   while(n%2==0)
   {
       n=n/2;
   }
   while(n%3==0)
   {
       n=n/3;
   }
   while(n%5==0)
    n=n/5;
   if(n==1)
     return 1;
   else
     return 0;
}
int main(){
  long long k,x=0;
  cin>>k;
  for(int i=1;i<=1000000;i++)
  {
      if(ktra(i))
        x++;
      if(x==k)
      {
          cout<<i;
          return 0;
      }
  }

}

