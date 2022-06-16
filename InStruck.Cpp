#include<bits/stdc++.h>
using namespace std;
const int mv=1e9+7;
long long sum(int n)
{
    if(n==0)
        return 0;
    long long s,num,i;
    s=num=i=0;
    while(num+(i+1)<=n)
    {
        i++;
        num+=i;
        s+=i*i;
    s=s%mv;
    }
    i++;
    s+=(n-num)*i;
    s=s%mv;
    return s;
}
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("InStruck.Inp ","r",stdin);
freopen("InStruck.Out ","w ",stdout);
    long long a,b,s;
    cin>>a>>b;
  s=(sum(b)-sum(a-1)+mv)%mv;
  cout<<s;


}
