#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("EraseLast.Inp","r",stdin);
freopen("EraseLast.Out","w ",stdout);
    cin>>n;
    while(n>0)
    {
        cout<<n<<endl;
        n=n/10;
    }
}
