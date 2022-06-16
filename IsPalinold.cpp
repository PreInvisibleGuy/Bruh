#include<bits/stdc++.h>
using namespace std;
int ktra(string x)
{
    string y=x;
    reverse(x.begin(),x.end());
    if(x==y)
        return 1;
    return 0;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("IsPalin.Inp    ","r",stdin);
freopen("IsPalin.Out ","w ",stdout);
    int q;
    string a;
    cin>>q;
    while(q--)
    {
        cin>>a;
        cout<<ktra(a)<<endl;
    }
}

