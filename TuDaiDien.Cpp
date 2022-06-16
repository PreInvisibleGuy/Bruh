#include<bits/stdc++.h>
using namespace std;
string s,p,d[300];
bool cp(string x,string y)
{
    if(x.size()!=y.size())
        return false;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]==y[i])
            continue;
        if(x[i]=='?' or y[i]=='?')
            continue;
        return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
 freopen("TuDaiDien.Inp  ","r",stdin);
freopen("TuDaiDien.Out ","w ",stdout);
    getline(cin,s);
    cin>>p;
    int n=0;
   string tmp="";
   s=s+' ';
   for(int i=0;i<s.size();i++)
    if(s[i]!=' ')
    tmp =tmp+s[i];
   else
   {
       if(tmp!="")
       {
           n++;
           d[n]=tmp;
           tmp="";
       }
   }
   int ans=0;
   for(int i=1;i<=n;i++)
   {
       if(cp(d[i],p)==true)
        ans++;
   }
   cout<<ans;
}
