#include<bits/stdc++.h>
using namespace std;
int n, a[1001], s, ans = 0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
	freopen("ThongKe2.Inp", "r", stdin);
	freopen("ThongKe2.Out", "w", stdout);
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n);
	for(int i = 1; i <= n; i++)
    {
		s = 1;
		for(int j = i + 1; j <= n; j++)
			if(a[i] == a[j])
				s++;
		ans = max(ans, s);
	}
	cout<<ans;
}
