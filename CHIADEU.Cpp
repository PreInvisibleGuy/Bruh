#include<bits/stdc++.h>
using namespace std;
long long a[1001],n,s=0,dem=0;
map<int,int> mp;
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CHIADEU.Inp","r",stdin);
freopen("CHIADEU.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(i!=j)
            {
                s=abs(a[i]+a[j]);
                s=s/2;
               if(mp[s]>0)
               {
                   dem=dem+mp[s];
                   mp[s]=0;
               }
            }
        }
    }
    cout<<dem;
}
