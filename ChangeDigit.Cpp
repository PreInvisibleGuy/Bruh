#include<bits/stdc++.h>
using namespace std;
int n,k,x;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("ChangeDigit.Inp   ", "r", stdin);
   freopen("ChangeDigit.Out", "w", stdout);
    cin>>n;
    cin>>k>>x;
    if(k==1)
    {
        n=n+x;
    }
    else
        if(k==2)
        n=n+x*10;
    else
        n=n+x*100;
    cout<<n;
}
