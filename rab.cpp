#include<bits/stdc++.h>
using namespace std;
long long x,y,a,b;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("rab.Inp   ","r",stdin);
freopen("rab.Out ","w ",stdout);
    cin>>x>>y>>a>>b;
    long long s=a+b;
    long long s1=abs(x-y);
    if(s1%s==0)
    {
        cout<<s1/s;
    }
    else
        cout<<-1;
}
