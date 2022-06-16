#include<bits/stdc++.h>
using namespace std;
long long a[1000001],n,s=0;
long long NN(long long a[1000001],long long n)
{
    if(n==1)
    {
        return a[1];
    }
    else
    {
        return min(a[n],NN(a,n-1));
    }
}
int main()
{  ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MINARR.INP     ","r",stdin);
freopen("MINARR.OUT  ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<NN(a,n);
}
