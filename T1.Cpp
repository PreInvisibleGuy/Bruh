#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long a,b,c,s;
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("T1.Inp   ","r",stdin);
freopen("T1.Out ","w ",stdout);
   cin>>a>>b>>c;
   s=max({a,b,c});
   cout<<(s-a)+(s-b)+(s-c);

}
