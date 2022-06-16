#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long f[101],x,s=0;
            ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("EFib.Inp   ","r",stdin);
freopen("EFib.Out ","w ",stdout);
    cin>>x;
    f[1]=f[2]=1;
    for(int i=3;i<=101;i++)
        f[i]=f[i-1]+f[i-2];
    for(int i=90;i>=1;i--)
    {
        if(x>0)
        {
            if(x>=f[i])
            {
                x=x-f[i];
                s++;
            }
        }
        else
        {
            cout<<s;
            return 0;
        }
    }
}
