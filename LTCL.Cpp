#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,s,ans=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]%2!=0)
              s++;
        else
        {
            ans=max(ans,s);
            s=0;
        }
    }
    cout<<ans;
}
