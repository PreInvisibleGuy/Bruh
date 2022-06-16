#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100001],n,s=0,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(a[i]==x)
          s=s+1;
    cout<<s;
}
