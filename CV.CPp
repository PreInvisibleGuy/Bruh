#include<bits/stdc++.h>
using namespace std;
long long n,ans=1e9;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("CV.INP   ","r",stdin);
  freopen("CV.OUT ","w ",stdout);
    cin>>n;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            long long m=n/i;
            ans=min(ans,(n/i+i)*2);
        }
    }
    cout<<ans;

}
