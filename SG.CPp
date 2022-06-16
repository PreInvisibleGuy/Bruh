#include<bits/stdc++.h>
using namespace std;
long long a[100001],d[100001],n;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SG.Inp   ","r",stdin);
freopen("SG.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        d[a[i]]++;
    }
    sort(a+1,a+1+n);
    cout<<d[a[n]];
}
