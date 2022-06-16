#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long p,n,k;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("MUACO.Inp","r",stdin);
   freopen("MUACO.Out","w",stdout);
    cin>>p>>n>>k;
    while(n>0)
{


        p=p-n*k;
        n--;
    }
    if(p>0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO"<<endl;
        cout<<abs(p);
    }
}
