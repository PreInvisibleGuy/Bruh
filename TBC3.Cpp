#include<bits/stdc++.h>
using namespace std;
int n,a[3003],x;
map<int,int> mp;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
 freopen("TBC3.Inp  ","r",stdin);
freopen("TBC3.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    long long s=0;
    mp[a[n]]=1;
    for(int j=n-1;j>=2;j--)
    {
        for(int i=1;i<j;i++)
        {
                x=2*a[j]-a[i];
                s=s+mp[x];
        }
        mp[a[j]]++;
    }
    cout<<s;
}
