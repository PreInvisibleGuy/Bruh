#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],s;
int main()
{     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("PTHUONG.INP  ","r",stdin);
//freopen("PTHUONG.OUT ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==2)
        {
            s=__gcd(a[1],a[2]);
        }
        if(i>2)
        {
            s=__gcd(s,a[i]);
        }
    }
    cout<<s;

}
