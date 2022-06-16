#include<bits/stdc++.h>
using namespace std ;
long long t=1e9;
long long a[1001],b[1001],n,k,kq = 0,l = 1 ;
int main ()
{
   ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
	freopen("SCHE.Inp" , "r" , stdin) ;
	freopen("SCHE.Out" , "w" , stdout) ;
	cin>>n>>k ;
	for(int i=1; i<=n;i++)
		cin>>a[i] ;
	for(int i=1;i<=k;i++)
		cin>>b[i] ;
	for(int i=1;i<=k;i++)
	{
		for(int j=l;j<=n-k+i;j++)
		{
			if(abs(a[j]-b[i])<t)
			{
				t=abs(a[j] - b[i]) ;
				l=j;
			}
		}
		kq+=t;
	}
	cout << kq ;
}
