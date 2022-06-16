#include<bits/stdc++.h>
using namespace std;
long long a[1001][1001],k,x,dem=0,m,n,d[100001],s;
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("FROG.Inp","r",stdin);
freopen("FROG.out","w",stdout);
    cin>>m>>n>>k;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
    {
        cin>>a[i][j];
        s=a[i][j];
        d[s]++;
    }
    sort(d+1,d+1+100000);
    for(int i=100000;i>=1;i--)
        if(d[i]!=0)
    {
        dem=dem+d[i];
        k--;
        if(k==0)
        {
            cout<<dem;
            return 0;
        }
    }

}
