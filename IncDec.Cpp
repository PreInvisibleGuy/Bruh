#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    string a;
 freopen("IncDec.Inp","r",stdin);
    freopen("IncDec.Out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a;
        if(a[1]=='+')
        {
           n=n+1;
        }
        else
            n=n-1;
    }
    cout<<n;

}
