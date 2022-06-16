#include<bits/stdc++.h>
using namespace std;
int a,b,c,n;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Luckymoney.Inp ","r",stdin);
freopen("Luckymoney.Out","w ",stdout);
    cin>>a>>b>>c;
    cin>>n;
    for(int i=0;i<=a;i++)
        for(int j=0;j<=b;j++)
           for(int k=0;k<=c;k++)
    {
        if(10000*i+20000*j+50000*k==n)
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}
