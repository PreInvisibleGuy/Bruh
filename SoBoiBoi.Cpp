#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("SoBoiBoi.Inp","r",stdin);
   freopen("SoBoiBoi.Out","w",stdout);
    long long a,b;
    cin>>a>>b;
    if(a%b!=0)
    {
        cout<<"No";
        return 0;
    }
    for(int i=b;i<=a;i++)
    {
        if(i%b==0 and a%i==0)
            cout<<i<<'\n';
    }
}
