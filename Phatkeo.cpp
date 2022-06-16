#include <bits/stdc++.h>
using namespace std;
int n,k,s=0;
int main() {
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("PhatKeo.Inp  ","r",stdin);
freopen("PhatKeo.Out","w ",stdout);
          cin>>n>>k;
          for(int i=1;i<=k-1;i++)
          {
              cout<<i<<' ';
              s=s+i;
          }
          cout<<n-s;


}
