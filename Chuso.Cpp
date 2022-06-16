#include<bits/stdc++.h>
using namespace std;
string a,b;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CHUSO.INP   ","r",stdin);
freopen("CHUSO.Out ","w ",stdout);
    cin>>a;
    int n=a.size(),s=0;
    for(int i=0;i<n;i++)
        s=s+(a[i]-'0');
    cout<<s<<endl;
    b=a;
    sort(b.begin(),b.end());
    int x=b.size();
    cout<<b[x-1]<<endl;
    for(int i=n-1;i>=0;i--)
        if(a[i]==b[x-1])
             cout<<n-i<<' ';

}
