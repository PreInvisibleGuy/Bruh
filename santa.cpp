#include<bits/stdc++.h>
using namespace std;
int mp[100001];
int a[100001],b[100001],c[100001],n,m,k;
int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)
        cin>>a[i];
    for(int i=1;i<=k;i++)
        cin>>b[i];
    for(int i=1;i<=m;i++)
        mp[a[i]]++;
    for(int i=1;i<=k;i++)
        mp[b[i]]++;
    cout<<n-m-k<<endl;
    for(int i=1;i<=n;i++)
        if(mp[i]==0)
           cout<<i<<' ';
}
