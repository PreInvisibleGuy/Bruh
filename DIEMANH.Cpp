#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],s=1,ans;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("DIEMANH.INP","r",stdin);
   freopen("DIEMANH.Out","w",stdout);
     cin>>n;
     for(int i=1;i<=n;i++)
        cin>>a[i];
   sort(a+1,a+1+n);
   a[n+1]=-1;
   for(int i=1;i<=n;i++)
     {
           if(a[i]==a[i+1])
              s++;
            else
              {
                ans=max(ans,s);
                s=1;
              }

     }
     cout<<ans;
}
