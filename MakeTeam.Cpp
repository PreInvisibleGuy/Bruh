#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0,z=0;
    pair<int, int> a[100];
   freopen("MakeTeam.Inp","r",stdin);
    freopen("MakeTeam.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i].first>>a[i].second;
    x=y=z=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i].first==8 and a[i].second>=5)
            x++;
    }
    for(int i=1;i<=n;i++)
        if(a[i].first==9 and a[i].second>=5)
           y++;
    for(int i=1;i<=n;i++)
    {
        if(a[i].first==10 and a[i].second>=5)
            z++;
    }
    cout<<max({x,y,z});
}

