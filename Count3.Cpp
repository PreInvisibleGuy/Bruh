#include<bits/stdc++.h>
using namespace std;
long long n,s=3;
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Count3.Inp ","r",stdin);
freopen("Count3.Out ","w ",stdout);
   cin>>n;
for(int i=1;i<=n;i++)
    s=s*2;
cout<<s/2;
}
