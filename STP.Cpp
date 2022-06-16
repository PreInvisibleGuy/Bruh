#include<bits/stdc++.h>
using namespace std;
int n;
int nto(int x)
{
    if(x<2)
        return 0;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
        return 0;
    return 1;
}
int solve(int x)
{
    for(int i=1;i<=x/2;i++)
    {
        if(nto(i)==1 and nto(x-i)==1)
            return 1;
    }
    return 0;
}

int ktra(int n)
{
    int dem=0;
    for(int i=1;i<=n;i++)
        if(solve(i)==1)
           dem++;
    return dem;
}
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("STP.Inp ","r",stdin);
freopen("STP.Out ","w ",stdout);
    cin>>n;
    cout<<ktra(n);
}
