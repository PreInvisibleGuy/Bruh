#include<bits/stdc++.h>
using namespace std;
long long n,a[50],s=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Sfibo.inp","r",stdin);
    freopen("Sfibo.out","w",stdout);
    cin>>n;
    a[1]=a[2]=1;
    for(int i=3;i<=45;i++)
        a[i]=a[i-1]+a[i-2];
    for(int i=45;i>=2;i--)
    {
        if(n>=a[i])
        {
            cout<<a[i]<<' ';
            n=n-a[i];
        }
    }

}
