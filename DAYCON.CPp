#include<bits/stdc++.h>
using namespace std;
int x=0,ans=0,n,k,s[10001],u,v;
pair <int ,int> a[10001];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        {
         cin>>a[i].first;
         a[i].second=i;
        }
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+a[i].first;
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
    {
       x=s[j]-s[i-1];
       if(x%k==0)
       {
           if(ans<j-i+1)
           {
                     u=j;
                     v=i;
                     ans=j-i+1;           }
       }
    }
    cout<<ans<<endl;
    for(int i=v;i<=u;i++)
        cout<<a[i].second<<' ';

}
