#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int a[1000001],n,m;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    cin>>m;
    for(int i=0;i<=m;i++)
    {
        cout<<mp[i]<<'\n';
    }
}
