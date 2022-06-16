#include<bits/stdc++.h>
using namespace std;
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("DecodeH.Inp ","r",stdin);
freopen("DecodeH.OUT ","w ",stdout);
    string s;
    cin>>s;
    int n=s.size();
    long long dp[30];
    dp[0]=1;
    dp[1]=1;
    if(s.substr(0,2)<="26")
        dp[1]++;
    for(int i=2;i<n;i++)
    {
        dp[i]=dp[i-1];
        if(s.substr(i-1,2)<="26")
            dp[i]=dp[i]+dp[i-2];
    }
    cout<<dp[n-1];
}
