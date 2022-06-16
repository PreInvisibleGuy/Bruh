#include<bits/stdc++.h>
using namespace std;
int a,b,c[10001][10001];
int main()
{
   cin>>a>>b;
   for(int i=1;i<=a;i++)
       cout<<'*';
   cout<<endl;
   for(int i=2;i<=a-1;i++)
      {
          for(int j=1;i<=b;j++)
   {
       if(j==1 or j==b)
       {
           cout<<'*';
       }
       if(j>1 and j<b)
           cout<<' ';

   }
   cout<<endl;
      }
      cout<<endl;
    for(int i=1;i<=a;i++)
         cout<<'*';

}
