#include<bits/stdc++.h>
using namespace std;
long long n;
int tong(long long n)
{
    if(n==0)
        return 0;
    else
        return n%10+tong(n/10);
}
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TongCS.Inp     ","r",stdin);
freopen("TongCS.Out  ","w ",stdout);
    cin>>n;
    cout<<tong(n);
}
