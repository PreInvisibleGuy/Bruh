#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s=1;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
            s=0;
    }
    cout<<s;
}
