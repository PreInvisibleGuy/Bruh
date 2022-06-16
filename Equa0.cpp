#include<bits/stdc++.h>
using namespace std;
long long s=0,n,m,a[100001],k;
int solve(long long x)
{
    int L,R,Mid,ans;
     ans=0;
        L=1;
        R=n;
        while(L<=R)
        {
            Mid=(L+R)/2;
            if(a[Mid]==x)
            {
                ans=1;
                break;
            }
            if(a[Mid]>x)
                R=Mid-1;
            else
                L=Mid+1;
        }
        return ans;

}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Equa0.Inp   ","r",stdin);
freopen("Equa0.Out ","w ",stdout);
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
 sort(a+1,a+1+n);
 long long ans=0;
 for(int i=1;i<=n;i++)
 {
     ans=ans+solve(-a[i]);
 }
 cout<<ans/2;

}
