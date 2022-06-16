#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s=0;
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("JumpInLine.Inp","r",stdin);
   freopen("JumpInLine.Out","w ",stdout);
   cin>>n;
      for(int i=1;i<=n;i++)
            s=s+i;
      cout<<s;

}

