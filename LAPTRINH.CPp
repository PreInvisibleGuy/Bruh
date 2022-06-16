#include<bits/stdc++.h>
using namespace std;
int a[1001],d[1001],n;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("LAPTRINH.INP   ","r",stdin);
freopen("LAPTRINH.OUT ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
         d[a[i]]++;
   int s=a[1];
   cout<<s<<endl;
   cout<<d[s];
}

