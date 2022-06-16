#include<bits/stdc++.h>
using namespace std;
long long n,a[500006];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<a[1]<<endl;
    long long m=min(a[1],a[2]);
    for(int i=2;i<=n;i++)
    {
        if(a[i]<m)
            m=a[i];
        cout<<m<<endl;
    }


}
