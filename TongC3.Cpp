#include<bits/stdc++.h>
using namespace std;
long long n,s=0;
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TongC3.Inp     ","r",stdin);
freopen("TongC3.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(i%3==0)
            s=s+i;
    }
    cout<<s;
}
