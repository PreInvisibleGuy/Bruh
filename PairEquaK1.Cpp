#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1001],k,x=0;
        freopen("PairEquaK1.Inp ","r",stdin);
    freopen("PairEquaK1.Out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
    {
         if(a[i]+a[j]==k)
         {
             x=x+1;
         }
    }
    cout<<x;
}
