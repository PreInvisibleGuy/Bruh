#include<bits/stdc++.h>
using namespace std;
int n,m,a[100001],b[100001],s=0;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("FLOWER.INP     ","r",stdin);
freopen("FLOWER.OUt ","w ",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
        s=0;
        for(int j=n;j>=1;j--)
            if(a[j]>=b[i])
              s++;
            else
                break;
        cout<<s<<' ';
    }
}
