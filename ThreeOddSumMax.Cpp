#include<bits/stdc++.h>
using namespace std;
  long long a[500006],n,s;
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n-2;i++)
        if((a[i]+a[i+1]+a[i+2])%2!=0)
    {
        s=a[i]+a[i+1]+a[i+2];
        break;
    }
    for(int i=1;i<=n-2;i++)
        if((a[i]+a[i+1]+a[i+2])%2!=0 and (a[i]+a[i+1]+a[i+2])>s )
             s=(a[i]+a[i+1]+a[i+2]);
    if(s%2==0)
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }
    cout<<s;
}
