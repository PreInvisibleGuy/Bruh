#include<bits/stdc++.h>
using namespace std;
long long n,s,x,dem=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SOLVE.INP ","r",stdin);
freopen("SOLVE.Out","w ",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            x=i;
            s=n/x;
            while(x>0)
            {
                dem=dem+x;
                x=x/10;
            }
            if(dem+i==s)
            {
                cout<<i;
                return 0;
            }

        }
    }
    cout<<-1;
}
