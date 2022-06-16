#include<bits/stdc++.h>
using namespace std;
double a,b;
double n;
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("VAT.INP     ","r",stdin);
freopen("VAT.OUT  ","w ",stdout);
    cin>>n;
    b=n/11;
    a=n-b;
    cout<<setprecision(2)<<fixed<<a;
    cout<<' ';
    cout<<setprecision(2)<<fixed<<b;
}
