#include<bits/stdc++.h>
using namespace std;
unsigned long long n,x,s=1;
int main()
{

     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("XMU.INP  ","r",stdin);
//freopen("XMU.OUT ","w ",stdout);
    cin>>n>>x;
    if(x==0)
    {
cout<<1;
return 0;
    }
    n=n%10;
    for(long long i=1;i<=x;i++)
        s=s*n;
    cout<<s%10;
}
