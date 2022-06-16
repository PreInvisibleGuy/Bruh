#include<bits/stdc++.h>
using namespace std;
long long a[20002],t,n,s=0;
int solve()
{
    if(n==1)
        return 1;
    if(n==2)
        return (a[1]!=a[2]);
    for(int i=2;i<=n-1;i++)
        if((a[i-1]-a[i])*(a[i]-a[i+1])>=0)
        return 0;
    return 1;
}
int main()
{

          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CheckSaw.Inp","r",stdin);
freopen("CheckSaw.Out ","w ",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        cout<<solve()<<endl;
    }
}
