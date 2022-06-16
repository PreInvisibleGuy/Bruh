#include<bits/stdc++.h>
using namespace std;
int n,a[1001];
int check(int x)
{
    int dem=0;
    for(int i=1;i*i<=x;i++)
        if(x%i==0)
    {
        dem=dem+i;
        if(x/i!=i)
            dem=dem+x/i;
    }
    return (dem%2==0);
}
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("uoc.Inp","r",stdin);
     freopen("uoc.Out","w",stdout);
    int t=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(check(a[i])==1)
           t++;
    cout<<t;
}
