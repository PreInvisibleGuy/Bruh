#include<bits/stdc++.h>
using namespace std;
int n,a[100001],s=0;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("milk.INP ","r",stdin);
  freopen("milk.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
     sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        a[i]=a[i]-n+i;
        if(a[i]>=0)
            s=s+a[i];
    }
    cout<<s;
}
