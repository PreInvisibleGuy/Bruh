#include<bits/stdc++.h>
using namespace std;
string x,y,e,d[1000001];
int n,m=0;
int main()
{

  ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  // freopen("X_palindrom.inp","r",stdin);
   //freopen("X_palindrom.out","w",stdout);
    cin>>x;
    n=x.size();
    for(int i=0;i<n;i++)
    {
        y="";
        for(int j=i;j<n;j++)
        {
            y=y+x[j];
            e=y;
            reverse(e.begin(),e.end());
            if(y==e and e.size()>1)
            {
             m++;
             d[m]=y;
            }
        }
    }
   int k=1;
   for(int i=2;i<=m;i++)
     if(d[i]!=d[i-1] and d[i].size()>1)
       k++;
   cout<<k<<'\n';
   cout<<d[1]<<'\n';
   for(int i=2;i<=m;i++)
     if(d[i]!=d[i-1] and d[i].size()>1)
          cout<<d[i]<<'\n';
}
