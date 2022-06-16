#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("Giaithua.inp   ","r",stdin);
//freopen("Giaithua.out ","w ",stdout);
    long long n,s=0;
    cin>>n;
    while(n>0)
    {
   n=n/5;
   s=s+n;
    }
    cout<<s;
}
