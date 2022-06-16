#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Lkey1.Inp","r",stdin);
freopen("Lkey1.Out","w ",stdout);
    cin>>a;
    int n=a.size(),s=0;
    for(int i=1;i<n;i++)
    {
        s=s+abs(a[i]-a[i-1]);
}
cout<<s;
}
