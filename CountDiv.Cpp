#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a, b, c, d,t;
 ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("CountDiv.INP","r",stdin);
    freopen("CountDiv.OUT","w",stdout);
	cin>>t;
    while(t--)
    {
        long long xc,xd;
    cin>>a>>b>>c>>d;
	xc = b/c - (a-1)/c;
	xd = b/d - (a-1)/d;
	long long e = c*d/__gcd(c, d);
	long long xcd = b/e - (a-1)/e;
	cout<<xc + xd - xcd<<'\n';
    }

}
