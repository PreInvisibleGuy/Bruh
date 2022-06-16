#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("ABK.Inp ","r",stdin);
freopen("ABK.Out","w ",stdout);
    long long a,b,k,t=1;
    cin>>a>>b>>k;
    for(int x=a;x<=b;x++)
    {
        if(abs(x-a)<=k and abs(x-b)<=k)
          {
             cout<<x<<'\n';
             t=0;
          }
    }
    if(t==1)
    {
     cout<<"No";
     return 0;
    }

}
