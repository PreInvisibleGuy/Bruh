#include<bits/stdc++.h>
using namespace std;
string s[101];
int n,dem=0;
int main()
{
      ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ConCatPalin.INP ","r",stdin);
    freopen("ConCatPalin.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
    {
        string x=s[i]+s[j];
        string y=x;
        reverse(x.begin(),x.end());
        if(x==y)
        dem++;

    }
    cout<<dem;
}
