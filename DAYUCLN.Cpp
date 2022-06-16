#include<bits/stdc++.h>
using namespace std;
long long t,n,a[100001];
int main(){
	freopen("DAYUCLN.inp","r",stdin);
	freopen("DAYUCLN.out","w",stdout);
	cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        a[0]=1;
        a[n+1]=1;
        for(int i=1;i<=n+1;i++)
        {
            cout<<(a[i]*a[i-1])/__gcd(a[i],a[i-1])<<' ';
        }
        cout<<'\n';
    }
}
