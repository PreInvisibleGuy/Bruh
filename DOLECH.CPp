#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],k,ans=0;
void sub1()
{
  for(int i=1;i<=n;i++)
    for(int j=i+1;j<=n;j++)
   {
       if(abs(a[i]-a[j])==k)
         ans++;
   }
   cout<<ans;
}
void sub2()
{
    sort(a+1,a+1+n);
    map<int,int> mp;
    mp.clear();
    mp[a[1]]++;
    long long ans=0;
    for(int j=2;j<=n;j++)
    {
        int x=a[j]-k;
        ans+=mp[x];
        mp[a[j]]++;
    }
    cout<<ans;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("DoLech.Inp","r",stdin);
     freopen("DoLech.Out","w",stdout);
   cin>>n>>k;
   for(int i=1;i<=n;i++)
    cin>>a[i];
 if(n<=1000)
    sub1();
 else
    sub2();





}

