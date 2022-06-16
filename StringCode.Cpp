#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    freopen("StringCode.Inp","r",stdin);
    freopen("StringCode.Out","w",stdout);
    long long n=a.size(),x;
    for(int i=0;i<n;i++)
    {
        x=a[i]-'a'+1;
        cout<<x;
    }
}
