#include<bits/stdc++.h>
using namespace std;
int n,m,a[100001],d1[100001],d2[100001],d3[100001];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("OLYMPIC.inp ","r",stdin);
freopen("OLYMPIC.out","w ",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    d1[0]=d2[0]=d3[0]=0;
    for(int i=1;i<=n;i++)
    {
        d1[i]=d1[i-1]+(a[i]==1);
        d2[i]=d2[i-1]+(a[i]==2);
        d3[i]=d3[i-1]+(a[i]==3);
    }
    while(m--)
    {
        int i,j;
        cin>>i>>j;
        cout<<d1[j]-d1[i-1]<<' ';
        cout<<d2[j]-d2[i-1]<<' ';
        cout<<d3[j]-d3[i-1]<<' '<<'\n';

    }
}
