#include<bits/stdc++.h>
using namespace std;
int a[1000001],d[100001];
long long n,ans=0;
int check(int x,int y)
{
    if(x==y)
        return 0;
    int a=x%10,b=y%10;
    if(a==b)
    {
        if(x/10!=y/10)
            return 1;
    }
        else
        {
            if(x/10==y/10)
                return 1;
        }
    return 0;
}
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    // freopen("C2L1.Inp","r",stdin);
   //  freopen("C2L1.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        d[a[i]]++;
    }
    for(int x=10;x<=99;x++)
        for(int y=x+1;y<=99;y++)
          if(check(x,y))
          {
          ans=ans+1LL*d[x]*d[y];
          }
cout<<ans;

}
