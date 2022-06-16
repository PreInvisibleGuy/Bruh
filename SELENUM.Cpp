#include<bits/stdc++.h>
using namespace std;
int n,m=0,l=0;
string d[10001],s;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SELENUM.INP ","r",stdin);
freopen("SELENUM.OUT ","w ",stdout);
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>s;s=s+'a';
         string x="";
         for(int t=0;t<s.size();t++)
            if('0'<=s[t] and s[t]<='9')
              x=x+s[t];
            else
            {
                if(x!="")
                {
                    d[++m]=x;
                    int q=s.size();
                    l=max(l,q); x="";

                }
            }

     }
     for(int i=1;i<=m;i++)
     {
         while(d[i].size()<l)
             d[i]='0'+d[i];
     }
     sort(d+1,d+1+m);
     for(int i=1;i<=m;i++)
     {
         while(d[i][0]=='0' and d[i].size() > 1)
            d[i].erase(0,1);
         cout<<d[i]<<'\n';
     }



}
