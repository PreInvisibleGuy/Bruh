#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CPalin.INP ","r",stdin);
    freopen("CPalin.OUT","w",stdout);
    int dem=0;
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
    {
        string x="";
        for(int k=i;k<=j;k++)
        {
            x=x+s[k];
        }
        string y=x;
        reverse(x.begin(),x.end());
        if(x==y)
            dem++;

    }
    cout<<dem;
}
