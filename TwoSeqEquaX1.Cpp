#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[10001],b[10001],n,m,x,s=0;
    freopen("TwoSeqEquaX1.Inp","r",stdin);
    freopen("TwoSeqEquaX1.Out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int j=1;j<=m;j++)
        cin>>b[j];
    cin>>x;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
            if(a[i]+b[j]==x)
         {
             s=s+1;
         }
     }
     cout<<s;
}
