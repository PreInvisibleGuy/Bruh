#include<bits/stdc++.h>
using namespace std;
long long A , B , C , D ,t;
long long countMul(long long L , long long R , long long X ) {
          L += L % X;
          R -= R % X;
          return ( L > R ) ? 0 : ( R - L ) / X + 1;
}
int main() {
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CountDiv.Inp  ","r",stdin);
freopen("CountDiv.Out","w ",stdout);
cin>>t;
  while(t--)
 {
        cin>>A>>B>>C>>D;
          if(B<=1e6)
          {
              int dem=0;
              for(int i=A;i<=B;i++)
              if(i%C==0 or i%D==0)
                  dem++;
              cout<<dem<<'\n';
          continue;

          }
          else
          {
          long long res = countMul(A,B,C) + countMul(A,B,D) - countMul(A,B,1LL*C*D);
          cout << res<<'\n';
          }

 }

}
