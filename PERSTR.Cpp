#include<bits/stdc++.h>
using namespace std;
int a[26],b[26],n,m,ans;
int check()
{
    for(int i=0;i<26;i++)
        if(a[i]!=b[i])
           return 0;
    return 1;
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("PERSTR.INP ","r",stdin);
     freopen("PERSTR.OUT","w",stdout);
    string t,s;
    cin>>t;
    cin>>s;
    n=t.size();m=s.size();
    for(int i=0;i<n;i++)
    {
        a[t[i]-'a']++;
    }
    for(int i=0;i<n;i++)
    {
        b[s[i]-'a']++;
    }
    ans=check();
    for(int i=n;i<m;i++)
    {
        b[s[i]-'a']++;
        b[s[i-n]-'a']--;
        ans+=check();
    }
    cout<<ans;



}
