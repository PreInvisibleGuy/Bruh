#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,s=0,x=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(a[i]%2==0)
        s++;
    else
        x++;
    cout<<s*x;
}
