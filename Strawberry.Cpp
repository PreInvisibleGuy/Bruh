#include<bits/stdc++.h>
using namespace std;
long long n,a[1001],k,mv=0,b[1001],tmp=0,s;
int main()
{
ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("Strawberry.Inp ","r",stdin);
   freopen("Strawberry.Out","w ",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mv=max(mv,a[i]);
    }
    for(int e=mv;e>=1;e--)
    {
        int x=0,tmp=0;
        for(int i=1;i<=n;i++)
            x=x+a[i]/e;
        if(x>=2*k)
        {
            s=max(s,k*e);
            continue;
        }
        if(x<k)
             continue;
        for(int i=1;i<=n;i++)
            b[i]=a[i]%e;
        sort(b+1,b+1+n,greater<int>());
        for(int i=1;i<=2*k-x;i++)
             tmp=tmp+b[i];
        s=max(s,e*(x-k)+tmp);
    }
    cout<<s;
}

