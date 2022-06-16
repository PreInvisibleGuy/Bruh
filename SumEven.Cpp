#include<bits/stdc++.h>
using namespace std;
int n,a[1001],l,r,s=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SumEven.Inp","r",stdin);
freopen("SumEven.Out","w ",stdout);
    cin>>n>>l>>r;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=l;i<=r;i++)
        if(a[i]%2==0)
           s=s+a[i];
    cout<<s;
}
