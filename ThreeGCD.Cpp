#include<bits/stdc++.h>
using namespace std;
long long a,b,c,x,y,ans=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("ThreeGCD.Inp  ", "r", stdin);
   freopen("ThreeGCD.Out", "w", stdout);
    cin>>x>>y;
    for(int i=x;i<=y;i++)
        for(int j=i+1;j<=y;j++)
           for(int k=j+1;k<=y;k++)
    {
       int t=__gcd(i,j);
       int q=__gcd(j,k);
       int x=__gcd(t,q);
        if(x>ans)
        {
            ans=x;
            a=i;b=j;c=k;
        }
    }
    cout<<ans;
}
