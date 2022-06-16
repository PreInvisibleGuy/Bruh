#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[1001],b[1001];
int m,n,s=0,x=1,c[1001];
int main()
{
       freopen("P2.Inp ","r",stdin);
      freopen("P2.Out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
{
    cin>>a[i].first;
    a[i].second=i;
}
    for(int i=1;i<=m;i++)
        {
 cin>>b[i].first;
 b[i].second=i;
        }
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    for(int i=n;i>=1;i--)
    {
        s=s+a[i].first*b[x].first;
        c[a[i].second]=b[x].second;x++;
    }
    cout<<s<<endl;
    for(int i=1;i<=x-1;i++)
    cout<<c[i]<<'\n';;

}
