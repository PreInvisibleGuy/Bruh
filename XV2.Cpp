#include<bits/stdc++.h>
using namespace std;
long long n,s=0,x=0;
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("XV2.Inp   ","r",stdin);
freopen("XV2.Out ","w ",stdout);
     cin>>n;
     while(x<5)
     {

        s=n%10;
        n=n/10;
        n=s*10000+n;
        cout<<n*2<<endl;
        x++;
     }
}
