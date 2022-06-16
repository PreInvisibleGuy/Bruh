#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,x,y,dem=0;
    cin>>m>>n>>x>>y;
    for(int i=m;i<=n;i++)
    {
        if(i%x==0 and i%y==0)
            dem++;
    }
    cout<<dem;
}
