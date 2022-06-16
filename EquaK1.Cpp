#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a[100001],k,x=0;
         freopen("EquaK1.Inp ","r",stdin);
    freopen("EquaK1.Out","w",stdout);
     cin>>n>>k;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
     }
     for(int i=1;i<=n;i++)
     {
         if(a[i]==k)
         {
             x=x+1;
         }
     }
     cout<<x;

}
