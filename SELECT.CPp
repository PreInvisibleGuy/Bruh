#include<bits/stdc++.h>
using namespace std;
long long s=0,x,a[1000001],j=1,ans=0,b;
int main()
 {

  while(cin>>x)
   {
       a[j]=x;
       j++;
   }
   long long n=j;
   sort(a+1,a+1+n);
   for(int i=2;i<=n;i++)
   {
      if(a[i-1]==a[i])
      {
          s++;
      }
      else
      {
             if(s>=n/2)
             {
           cout<<a[i-1];
           return 0;
             }
             else
                 s=0;
   }

}
 }
