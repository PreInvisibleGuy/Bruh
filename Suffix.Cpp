#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100001],s=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)
         cin>>a[i];
    for(int i=n;i>0;i--)
    {
        s=s+a[i];
        cout<<s<<endl;
    }

}
