#include<bits/stdc++.h>
using namespace std;
int a[100001],n,s=1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=2;i<=n;i++)
    {
        if(a[i-1]>a[i])
        {
            s++;
        }
    }
    cout<<s;
}
