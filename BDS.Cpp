#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s=0;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("BDS.INP     ","r",stdin);
freopen("BDS.OUt ","w ",stdout);
    cin>>n;
    cout<<n<<' ';
    while(n!=1)
    {
        if(n%2!=0)
        {
            n=n*3+1;
        }
        else
        {
        n=n/2;
        }
        cout<<n<<' ';

    }


}
