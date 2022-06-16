#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CutPalin.INP ","r",stdin);
    freopen("CutPalin.OUT","w",stdout);
    string s,x="",z="";
    cin>>s;
    int n=s.size();
    for(int i=1;i<n-1;i++)
    {
        x="";z="";
        for(int j=0;j<i;j++)
            x=x+s[j];
        for(int j=i;j<n;j++)
            z=z+s[j];
        string y=x,a=z;
        reverse(x.begin(),x.end());
        reverse(z.begin(),z.end());
        if(x==y and a==z)
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}
