#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p,x;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("Cut.Inp", "r", stdin);
    freopen("Cut.Out", "w", stdout);
    cin>>s>>p;
    int n=s.size();
    int m=p.size();
    int ans=0;
    int i=m-1;
    while(i<=n-1)
    {
        x=s.substr(i-m+1,m);
        if(x==p)
        {
            ans++;i+=m;
        }
        else
            i++;
    }
    cout<<ans;
}
