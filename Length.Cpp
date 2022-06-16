#include<bits/stdc++.h>
using namespace std;
long long i,j,q,a[200001],n,s[200001],k;
int main()
{
   freopen("length.inp","r",stdin);
   freopen("length.out","w",stdout);
    cin>>n>>q;
    for(int m=1;m<=n;m++)
    {
        cin>>a[m];
        s[m]=s[m-1]+a[m];
    }
    while(q--)
    {
        cin>>i>>k;
        cout<<s[i+k-1]-s[i+k/2-1]-(s[i+k/2-1]-s[i-1])<<'\n';
    }
}
