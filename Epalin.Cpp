#include<bits/stdc++.h>
using namespace std;
string s;
int d[1001][1001];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("EPalin.Inp ","r",stdin);
freopen("EPalin.Out","w ",stdout);
    cin>>s;
    int n=s.size();
    s=" "+s;
    for(int i=1;i<=n;i++)
        d[i][i]=1;
    for(int i=1;i<n;i++)
        d[i][i+1]=2-(s[i]!=s[i+1]);
    for(int i=n-2;i>=1;i--)
        for(int j=i+2;j<=n;j++)
    {
        if(s[i]==s[j])
            d[i][j]=2+d[i+1][j-1];
        else
            d[i][j]=max(d[i][j-1],d[i+1][j]);
    }
    cout<<n-d[1][n];
}
