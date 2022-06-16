#include<bits/stdc++.h>
using namespace std;
int n,dem=0,a,b;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(__gcd(a,b)==1)
            dem++;
            }
    cout<<dem;
}
