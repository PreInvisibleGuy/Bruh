#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a[101];
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SXC.INP  ","r",stdin);
freopen("SXC.OUT","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
        cout<<a[i]<<endl;

}
