#include<bits/stdc++.h>
using namespace std;
long long n,a[10001],ans=0,x=0,m=1,dem=1;
string s;
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MoveRect.Inp   ","r",stdin);
freopen("MoveRect.Out ","w ",stdout);
    cin>>n;
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
             x++;
        else
            x--;
        a[m]=x;
        m++;
    }
    sort(a+1,a+1+m);
   for(int i=2;i<=m;i++)
   {
       if(a[i]==a[i-1])
          dem++;
       else
       {
           ans=max(ans,dem);
           dem=1;
       }
   }
   cout<<ans;
}
