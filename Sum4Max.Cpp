#include<bits/stdc++.h>
using namespace std;
long long n,a[500006],s;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    long long m=a[1]+a[2]+a[3]+a[4];
    for(int i=2;i<=n-3;i++)
    {
        s=a[i]+a[i+1]+a[i+2]+a[i+3];
        if(s>m)
        {
            m=s;
        }
    }
    cout<<m;
}
