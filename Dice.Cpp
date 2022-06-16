#include<bits/stdc++.h>
using namespace std;
int t,n;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Dice.Inp","r",stdin);
freopen("Dice.Out","w ",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<6-n+1<<'\n';
    }
}
