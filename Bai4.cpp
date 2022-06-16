#include<bits/stdc++.h>
using namespace std;
const int mv=1e8+9;
long long s=1;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Bai4.INP ","r",stdin);
freopen("Bai4.Out","w ",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     s=s+s*(s+1)/2;
     s=s%mv;
    }
    cout<<s;
}
