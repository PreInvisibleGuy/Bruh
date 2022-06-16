#include<bits/stdc++.h>
using namespace std;
long long LN(long long n)
{
    if(n==0)
        return 0;
    else
     return max(n%10,LN(n/10));
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Maxdg.Inp     ","r",stdin);
freopen("Maxdg.Out  ","w ",stdout);
    long long n;
    cin>>n;
    cout<<LN(n);
}
