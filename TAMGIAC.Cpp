#include<bits/stdc++.h>
using namespace std;
int n,a[100001],s=0,dem=0;
int main()
{
   cin>>n;
   for( int i=1;i<=n;i++)
    cin>>a[i];
   for(int i=1;i<=n;i++)
    for(int j=i+2;j<=n;j++)
   {
       for(int x=i;x<=j;x++)
        for(int y=x+1;y<=j;y++)
          for(int z=y+1;z<=j;z++)
       {
         if(x+y>z and z+y>x and x+z>y)
         {
             s=0;
             dem=max(dem,j-i+1);
         }
         else
            s=1;
       }
   }
   cout<<dem;
}
