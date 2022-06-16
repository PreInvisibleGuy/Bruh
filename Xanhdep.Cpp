#include<bits/stdc++.h>
using namespace std;
int n;
string a;
int ans=0;
int solve(string s)
{
    int n=s.size(),ans=1,dem=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            dem++;
            ans=max(ans,dem);
        }
        else
            dem=1;
    }
    return ans;
}
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("Xanhdep.Inp ","r",stdin);
  freopen("Xanhdep.Out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>a;
        ans=max(ans ,solve(a));
    }
    cout<<ans;
}
