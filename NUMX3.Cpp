#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b,a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll a,b,c,d,e;
	cin >> a >> b >> c >> d>>e;
	ll res = (b/c + b/d+b/e) - ((a-1)/c + (a-1)/d+(a-1)/e);
	int UCLN = gcd(a,b);
    int uc=gcd(b,c);
    UCLN=gcd(UCLN,uc);
	ll BCNN = c*d*e/UCLN;
	res -= (b/BCNN - (a-1)/BCNN);
	cout << res;

	return 0;
}
