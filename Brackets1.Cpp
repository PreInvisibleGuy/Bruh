#include<bits/stdc++.h>
using namespace std;
int solve(string s)
{
    int n,m,d;
    n=s.size();m=d=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(') m++;
        else d++;
        if(m<d)
             return 0;
    }
    if(m==d)
    return 1;
   else
    return 0;
}
int main()
{

    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("Brackets1.Inp   ","r",stdin);
  freopen("Brackets1.Out ","w ",stdout);
    int t;
    cin>>t;
    while(t--)
    {
     string s;
     cin>>s;
     cout<<solve(s)<<'\n';
    }
}
