#include<bits/stdc++.h>
using namespace std;
int n,a[200002],l[200002],r[200002],mi[3],s;
long long minl[200002],maxr[200002];
int main() {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("Seq.Inp", "r", stdin);
    freopen("Seq.Out", "w", stdout);
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
  mi[0]=0;mi[1]=a[1];mi[2]=a[1]+a[2];
  for(int i=3;i<=n;i++)
  {
      s=s+a[i];
      int t=i%3;
      l[i]=s-mi[t];
      mi[t]=min(mi[t],s);
  }
  mi[0]=0;mi[1]=a[n];mi[2]=a[n-1]+a[n];
  for(int i=n-3;i>=1;i--)
  {
      s=s+a[i];
      int t=i%3;
      r[i]=s-mi[t];
      mi[t]=min(mi[t],s);
  }


}
