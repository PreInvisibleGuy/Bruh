#include<bits/stdc++.h>
using namespace std;
long long a,b,k,s=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("ABK1.Inp ","r",stdin);
freopen("ABK1.Out","w ",stdout);
    cin>>a>>b>>k;
    for(long long x=a;x<=k;x++)
    {
    if(abs(x-a)<=k and abs(x-b)<=k)
        s++;
    }
    cout<<s;
}
