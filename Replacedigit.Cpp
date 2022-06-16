#include<bits/stdc++.h>
using namespace std;
string a;
int t;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Replacedigit.Inp","r",stdin);
freopen("Replacedigit.Out","w ",stdout);
    cin>>t;
    while(t--)
    {
        cin>>a;
        for(int i=0;i<a.size();i++)
             if(a[i]=='0')
                a[i]='5';
        cout<<a<<'\n';
    }
}
