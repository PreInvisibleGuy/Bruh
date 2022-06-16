#include<bits/stdc++.h>
using namespace std;
pair<int,int> d[1001];
bool compare(pair<int,int> a,pair<int,int> b)
{
   int ta,ma,tb,mb;
   ta=a.first;ma=a.second;tb=b.first;mb=b.second;
   if(ta*mb<tb*ma) return true;
   if(ta*mb==tb*ma) return (ta<tb);
   return false;
}
int n,x;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("PS.Inp ","r",stdin);
freopen("PS.Out","w ",stdout);
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>d[i].first>>d[i].second;
sort(d+1,d+1+n,compare);
for(int i=1;i<=n;i++)
    cout<<d[i].first<<' '<<d[i].second<<'\n';



}
