#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],sc,sl,s=0,ans;
int main()
{
      ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DDELETE.INP", "r", stdin);
    freopen("DDELETE.OUT", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sc=sl=0;
    for(int i=1;i<=n;i++)
    {
        s=s+a[i];
        if(a[i]%2==0)
            sc++;
        else
            sl++;
    }
   if(s%2==0)
   {
     ans=sc*(sc-1)/2+sl*(sl-1)/2;
   }
   else
   {
     ans=sc*sl;
   }
   cout<<ans;

}

