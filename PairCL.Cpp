#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100001],b[100001],x=0,m;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++)
       b[i]=a[i];
    if(a[m]%2==0)
    {
        sort(b+1,b+1+m);
        for(int i=m;i>0;i--)
            if(b[i]%2!=0)
        {
            cout<<b[i]+a[m];
                return 0;
        }
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }
    }
    else
        sort(b+1,b+1+m);
    for(int i=m;i>0;i--)
        if(b[i]%2==0)
    {
        cout<<b[i]+a[m];
        return 0;
    }
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }
}
