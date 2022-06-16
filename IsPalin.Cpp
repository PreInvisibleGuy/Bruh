#include<bits/stdc++.h>
using namespace std;
int ispalin(string x){
	int n = x.size();
	if(n == 1)
		return 1;
	if(n == 2)
		return (x[0] == x[1]);
	if(x[0] != x[n-1])
		return 0;
	x.erase(n-1, 1);
	x.erase(0, 1);
	return ispalin(x);
}
int t;
string x;
int main(){
	freopen("ISPALIN.Inp", "r", stdin);
	freopen("ISPALIN.Out", "w", stdout);
	cin>>t;
	while(t--){
		cin>>x;
		cout<<ispalin(x)<<'\n';
	}
}
