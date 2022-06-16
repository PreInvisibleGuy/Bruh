#include<bits/stdc++.h>
using namespace std;
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SubDis.Inp ","r",stdin);
freopen("SubDis.OUT ","w ",stdout);
string s;
    cin>>s;
   int ans,m,n=s.size();
   string d[2002],x;
   ans=1;
   for(int l=1;l<=n-1;l++)
   {
       m=0;
       for(int i=0;i+l<=n;i++)
       {
           x=s.substr(i,l);
           m++;
           d[m]=x;
       }
       sort(d+1,d+1+m);
       ans++;
       for(int i=2;i<=m;i++)
        if(d[i]!=d[i-1])
           ans++;
   }
   cout<<ans;

}
