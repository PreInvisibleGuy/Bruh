#include<bits/stdc++.h>
using namespace std;
string a;
bool ktra(string x)
{
    string y=x;
    reverse(x.begin(),x.end());
    if(x==y)
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("LPalin.Inp ","r",stdin);
freopen("LPalin.Out","w ",stdout);
    cin>>a;
    int n=a.size(),ans=0;
    for(int i=0;i<n;i++)
    {
        string s="";
        for(int j=i;j<n;j++)
        {
            s=s+a[j];
        if(ktra(s)==true)
            ans=max(ans,j-i+1);
        }

    }
    cout<<ans;
}
