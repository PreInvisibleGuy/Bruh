#include<bits/stdc++.h>
using namespace std;
pair<int,int>  c[200002];
int main()
{
    int n;
   ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("NOIDIEM.Inp","r",stdin);
    freopen("NOIDIEM.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     cin>>c[i].first;
     c[i].second=0;
    }
    for(int i=1;i<=n;i++)
{
    cin>>c[i+n].first;
    c[i+n].second=1;
}
sort(c+1,c+1+2*n);
int i=2,s=0;
while(i<=2*n)
{
    if(c[i].second!=c[i-1].second)
    {
        s++;
        i=i+2;
    }
    else
        i++;
}
cout<<s;
}
