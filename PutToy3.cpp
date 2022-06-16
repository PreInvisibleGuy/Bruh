#include<bits/stdc++.h>
using namespace std;
int n,a[100001],s=0,k,b[100001],t;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("PutToy3.Inp","r",stdin);
   freopen("PutToy3.Out","w ",stdout);
   cin>>n>>t;
   for(int i=1;i<=n;i++)
       cin>>a[i];
    b[1]=a[1];
    for(int i=2;i<=n;i++)
          b[i]=b[i-1]+a[i];
   for(int i=1;i<=t;i++)
   {
          cin>>k;
     for(int i=k;i<=n;i++)
     {
         if(b[i]-b[i-k]<1)
        {
            s++;
        }
     }
     cout<<s<<endl;
     s=0;
   }
}

