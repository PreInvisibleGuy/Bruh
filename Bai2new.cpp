#include<bits/stdc++.h>
using namespace std;
int n,a[10001],dem,s[10001];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("Bai2.INP ","r",stdin);
//freopen("Bai2.Out","w ",stdout);
    cin>>n;
    dem=n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+a[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
    {
        int x=s[j]-s[i-1],ans=0;
        for(int t=i;t<=j;t++)
              if(x%a[t]==0)
                ans++;
      if(ans==j-i+1)
      dem++;
    }
    cout<<dem;

}
