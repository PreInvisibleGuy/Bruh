#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10001];
    int n;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("NumCat.Inp   ","r",stdin);
freopen("NumCat.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=2*n;i++)
        cin>>a[i];
    sort(a+1,a+1+n*2);
    for(int i=n*2;i>=1;i--)
        cout<<a[i];
}
