#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long  m,n,s=0,x=0;
   // freopen("TONGTC.Inp ","r",stdin);
    //freopen("TONGTC.Out","w",stdout);
    cin>>m;
    cin>>n;
     for(int i=1;i<=m;i++)
     {
         s=s+n%10;
         n=n/10;
     }

   cout<<s;

}
