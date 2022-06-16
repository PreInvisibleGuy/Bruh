#include<bits/stdc++.h>
using namespace std;
long long n,res,i,j,k;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CHIAHET.INP","r",stdin);
freopen("CHIAHET.OUT","w ",stdout);
    cin>>n;
    k=((-1+sqrt(8.0*n+1))/2);
    if(k*(k+1)/2==n)
        k=k-1;
    i=k+1;
     j=n-k*(k+1)/2;
     if(i==1)
         res=1;
     else
     {
         res=1;
         for(k=2;k<=i-1;k++)
         {
             res=(res/k+k)*k;
         }
         res=(res/i+j)*i;
     }
     cout<<res;
}
