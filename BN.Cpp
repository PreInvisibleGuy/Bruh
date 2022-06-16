#include<bits/stdc++.h>
using namespace std;
int a[200002];
int n,ii;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("BN.Inp","r",stdin);
    freopen("BN.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
     {
          cin>>a[i];
     }
     for(int i=1;i<=n;i++)
     {

         ii=0;
         for(int t=i-1;t>=1;t--)
            if(a[t]==a[i])
         {
             ii=t;
             break;
         }
         cout<<ii<<' ';
     }

}
