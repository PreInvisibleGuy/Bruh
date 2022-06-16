#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double s=1;
    long long a,n;
    const int mv=1e9+7;
    cin>>a>>n;
    int t=a;
    for(int i=1;i<=n;i++)
    {
      s=s+t;
      t=t*a;
      if(t>=mv)
        t=t%mv;
      if(s>=mv)
         s=s%mv;
    }
    cout<<s;
}
