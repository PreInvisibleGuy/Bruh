#include<bits/stdc++.h>
using namespace std;
pair<int, int> ds[200000];
int n,k,s=0;
int main()
{
        freopen("Art.Inp  ","r",stdin);
    freopen("Art.Out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>ds[i].first>>ds[i].second;
     sort(ds+1,ds+1+n);
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
    {
        if(ds[i].first==ds[j].first and ds[j].second-ds[i].second<=k)
            s=max(j-i+1,s);
    }
    cout<<s;
}
