#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, x, y, u, v, e, f;
	freopen("PointInLine.Inp", "r", stdin);
	freopen("PointInLine.Out", "w", stdout);
	cin>>a>>x>>y>>u>>v>>e>>f;
	if(y == a*x)
		cout<<1<<'\n';
	else
		cout<<0<<'\n';
	if(v == a*u)
		cout<<1<<'\n';
	else
		cout<<0<<'\n';
	if(f == a*e)
		cout<<1<<'\n';
	else
		cout<<0<<'\n';
}
