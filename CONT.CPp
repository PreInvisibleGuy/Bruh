#include<bits/stdc++.h>
using namespace std;
long long a[300003],b[300003],n,dem=0;
int main()
{

ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("CONT.INP   ","r",stdin);
  freopen("CONT.OUT ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        b[i]=a[i]+(n-i+1);
    }
    for(int i=1;i<=n;i++)
    {
        long long x=*max_element(b+i+1,b+1+n);
       if(a[i]+n>=x)
    {
        cout<<n-i+1;
        return 0;
    }
    }
}
