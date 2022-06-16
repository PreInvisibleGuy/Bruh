#include<bits/stdc++.h>
using namespace std;
int main()
{
     freopen("ABBA.Inp ", "r", stdin);
   freopen("ABBA.Out", "w", stdout);
    int q;
    string a;
    cin>>q;
    while(q--)
    {
    cin>>a;
    int n=a.size();
    if(a[0]==a[n-1])
        cout<<0<<'\n';
    else
        cout<<1<<'\n';
    }

}
