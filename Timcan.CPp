#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m=1,n;
    freopen("Timcan.Inp ","r",stdin);
    freopen("Timcan.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
           m=m*10;
    if(i==n-1)
    {
        cout<<m<<" ";
        continue;
    }
    }
    cout<<m-1;

}
