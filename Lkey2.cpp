#include<bits/stdc++.h>
using namespace std;
int Pos(char ch,string s)
{
    for(int i=0;i<s.size();i++)
        if(ch==s[i])
           return i;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Lkey2.Inp","r",stdin);
freopen("Lkey2.Out","w ",stdout);
    string s,vt;
    cin>>vt;
    cin>>s;
    int ans=0;
    for(int i=0;i+1<s.size();i++)
    {
        int x=Pos(s[i],vt);
        int y=Pos(s[i+1],vt);
        ans=ans +abs(y-x);
    }
    cout<<ans;
}
