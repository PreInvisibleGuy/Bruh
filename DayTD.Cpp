#include<bits/stdc++.h>
using namespace std;
int n,a[101],s=1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=2;i<=n;i++)
    {
        if(a[i]>=a[i-1])
            s++;
    }
    if(s==n)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";

}
