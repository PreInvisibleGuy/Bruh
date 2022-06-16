#include<bits/stdc++.h>
using namespace std;
int n,d[1000001][4];
const int base=123456789;
int main()
{

          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Jump3.Inp","r",stdin);
freopen("Jump3.Out ","w ",stdout);
    cin>>n;
    d[1][1]=1;d[1][2]=d[1][3]=0;
    d[2][1]=0;d[2][2]=1;d[2][3]=0;
    d[3][1]=1;d[3][2]=1;d[3][3]=1;
    for(int i=4;i<=n;i++)
    {
        d[i][1]=(d[i-1][2]+d[i-1][3])%base;
        d[i][2]=(d[i-2][1]+d[i-2][3])%base;
        d[i][3]=(d[i-3][1]+d[i-3][2])%base;
    }
    int ans=(1LL*d[n][1]+1LL*d[n][2]+1LL*d[n][3])%base;
    cout<<ans;



}
