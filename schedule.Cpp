#include<bits/stdc++.h>
using namespace std;
int t,x,n,s;
int a[1001],b[1001];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Schedule.Inp","r",stdin);
freopen("Schedule.Out","w ",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(x>=10)
            cout<<'0'<<'\n';

        else
        {
        cout<<x + 10*(n-1) - n*x<<'\n';

        }

    }
}
