#include<bits/stdc++.h>
using namespace std;
long long n;
pair<int,int> a[200002];
int main()
{
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i].first>>a[i].second;
     }
     sort(a+1,a+1+n);
     for(int i=1;i<=n;i++)
     {
       cout<<a[i].first<<' '<<a[i].second;
       cout<<'\n';
     }
}
