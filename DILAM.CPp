#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,ans=1e9,s;
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++)
          cin>>a[i];
    sort(a+1,a+1+n);
   for(int i=2;i<=n;i++)
 {
    s=a[i]-a[i-1];
    ans=min(s,ans);
  }
cout<<ans;
}
