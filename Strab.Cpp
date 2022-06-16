#include<bits/stdc++.h>
using namespace std;
int main(){
	string st;
	freopen("Strab.Inp", "r", stdin);
	freopen("Strab.Out", "w", stdout);
	cin>>st;
	int n = st.size();
	for(int i = 0; i < n; i++)
		if(st[i] != 'a' && st[i] != 'b')
		{
			cout<<0;
			return 0;
		}
	if(n == 1)
		cout<<1;
	else
	{
		for(int i = 0; i <= n - 1; i++)
			if(st[i] == st[i+1]) {
				cout<<0;
				return 0;
			}
		cout<<1;
	}
}

