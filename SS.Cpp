#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SS.Inp   ","r",stdin);
freopen("SS.Out ","w ",stdout);
    cin>>n;
    long long a=n%10;
    if(a==0)
    {
        cout<<n/10;
    }
    else
        cout<<n/10+1;
}
