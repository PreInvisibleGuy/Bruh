#include<bits/stdc++.h>
using namespace std;
const long long mv=1e8+7;
int main()
{
    long long n,x;
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TONGBP.INP  ","r",stdin);
freopen("TONGBP.OUT","w ",stdout);
        cin>>x;
        x=(x+1)*x*(2*x+1)/6;
        x=x%mv;
        cout<<x;
}

