#include <bits/stdc++.h>
using namespace std;
int n,ans=0,k;
int a[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
freopen("shoes.inp", "r", stdin);
freopen("shoes.out", "w", stdout);
	cin >> n >> k;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
	}
	sort(a+1, a+1 + n);
	reverse(a+1, a+1 + n);
	for(int i = 1; i<n; ++i){
		if(abs(a[i]-a[i+1]) <= k){
			++ans;
			++i;
		}
	}
	cout << ans;





}







