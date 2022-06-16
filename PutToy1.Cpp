#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],s=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("PutToy1.Inp  ","r",stdin);
freopen("PutToy1.Out ","w ",stdout);
   cin>>n;
   for(int i=1;i<=n;i++)
       cin>>a[i];
   for(int i=2;i<=n;i++)
   {
        if(a[i-1]==a[i] and a[i]!=1)
        {
           s++;
        }

   }
   cout<<s;
}
