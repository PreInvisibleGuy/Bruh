#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100001],b[100001],m,s,c=0;
    freopen("MaxEven.Inp","r",stdin);
    freopen("MaxEven.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=n;i>0;i--)
        if(a[i]%2==0)
    {
        cout<<a[i];
        return 0;
    }
    cout<<"IMPOSSIBLE";



        }
