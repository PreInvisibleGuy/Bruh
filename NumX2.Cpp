#include<bits/stdc++.h>
using namespace std;
long long a ,b , c , d,e;

int main() {
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("NumX2.Inp ","r",stdin);
freopen("NumX2.Out","w ",stdout);
          cin>>a>>b>>c>>d>>e;
    long long nc=b/c-(a-1)/c;
    long long nd=b/d-(a-1)/d;
    long long ne=b/e-(a-1)/e;
    long long x=c*d/__gcd(c,d),ncd=b/x-(a-1)/x;
    long long y=c*e/__gcd(c,e),nde=b/y-(a-1)/y;
    long long z=d*e/__gcd(d,e),nce=b/z-(a-1)/z;
    long long u=x*e/__gcd(x,e),cde=b/u-(a-1)/u;
    long long ans=nc+nd+ne-ncd-nde-nce+cde;
    cout<<ans;

}
