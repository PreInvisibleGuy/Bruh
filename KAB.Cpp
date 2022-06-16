#include<bits/stdc++.h>
using namespace std;
int main()
{
   freopen("KAB.Inp ", "r", stdin);
   freopen("KAB.Out", "w", stdout);
    string a;
    cin>>a;
    long long ans=0,na=0;
    for(int i=0;i<a.size();i++)
        if(a[i]=='A') na++;
        else   ans=ans+na;
        cout<<ans;


}

