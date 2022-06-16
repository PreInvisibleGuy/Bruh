#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("BoiBoi.Inp","r",stdin);
   freopen("BoiBoi.Out","w",stdout);
    long long a,b,c;
    cin>>a>>b>>c;
    if(a%b==0 and b%c==0)
        cout<<"Yes";
    else
        cout<<"No";
}
