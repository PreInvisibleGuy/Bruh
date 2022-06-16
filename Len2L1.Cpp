#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Len2l1.inp", "r", stdin);
    freopen("Len2l1.out", "w", stdout);
	long long t,n,j,k;
	cin>>t;
	while(t--)
	{
		map<string,int>mp;
		map<char,int>l,r;
		cin>>n;
		long long ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			ans+=l[a[0]]+r[a[1]]-2*mp[a];
			l[a[0]]++;
			r[a[1]]++;
			mp[a]++;
		}
		cout<<ans<<"\n";
	}
}
