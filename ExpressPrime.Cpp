#include<bits/stdc++.h>
using namespace std;
long long n,a[100001];
int ktra(int x)
{
    int dem=0;
    for(int i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            cout<<i<<' ';
            while(x%i==0)
                x=x/i;

        }
    }
    cout<<'\n';
    return 1;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("ExpressPrime.Inp ","r",stdin);
   freopen("ExpressPrime.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
       ktra(a[i]);
    }
}
