#include<bits/stdc++.h>
using namespace std;
int ktra(int n)
{
    if(n<2)
        return 0;
   if(n==2)
       return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int a[505],n,dem=0;
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("ChenhLech.Inp ","r",stdin);
  freopen("ChenhLech.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
    {
        int s=abs(a[i]-a[j]);
        if(ktra(s))
            dem++;
    }
    cout<<dem;
}
