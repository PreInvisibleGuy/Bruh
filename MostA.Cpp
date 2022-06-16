#include<bits/stdc++.h>
using namespace std;
int n,ans=0;
string a[1001],b[1001];
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MostA.Inp   ","r",stdin);
freopen("MostA.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        string x=a[i];
        int m=x.size(),s=0;
        for(int j=0;j<m;j++)
           if(x[j]=='a')
        {
            s++;
        }
        ans=max(ans,s);
    }
    int t=1;
    for(int i=1;i<=n;i++)
    {
        string x=a[i];
        int m=x.size(),s=0;
        for(int j=0;j<m;j++)
           if(x[j]=='a')
        {
            s++;
        }
        if(s==ans)
        {
            b[t]=a[i];
            t++;
        }
    }
    sort(b+1,b+1+t);
    for(int i=1;i<=t;i++)
    {
      if(b[i]!="")
      {
          cout<<b[i]<<'\n';
      }
    }


}
