#include<bits/stdc++.h>
using namespace std;
long long n,a[5005],q;
int tong(int x)
{
     int i=1,j=n,s=0;
        while(i<j)
        {
            if(a[i]+a[j]==x)
                  return 1;
            if(a[i]+a[j]>x)
                j--;
            else
                if(a[i]+a[j]<x)
                i++;
        }
    return 0;
}
int main()
{
          ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("XSum.Inp ","r",stdin);
    freopen("XSum.Out","w",stdout);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    int x;
    while(q--)
    {
        cin>>x;
        cout<<tong(x)<<'\n';

    }
}
