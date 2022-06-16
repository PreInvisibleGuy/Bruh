#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    pair<int, int> a[100];
    freopen("Award.Inp","r",stdin);
    freopen("Award.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i].first>>a[i].second;
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        if(a[i].first==a[n].first and a[i].second>=5)
            x++;
    }
    cout<<x;
}
