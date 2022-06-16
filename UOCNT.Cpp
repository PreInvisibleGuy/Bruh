#include <bits/stdc++.h>
using namespace std;
long long n,s=0;
int main()
{
 ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  freopen("UOCNT.INP ","r",stdin);
freopen("UOCNT.Out","w ",stdout);
    cin>>n;
    for (long long i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            s++;
            while(n%i==0)
                n=n/i;
        }
    }
    if(n>1)
        s++;
    cout<<s;
}
