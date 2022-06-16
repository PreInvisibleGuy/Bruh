#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    for(int i=0;i<=9;i++)
        for(int j=0;j<=9;j++)
    {
        if((a+b+i+j)%9==0)
        {
            cout<<a<<b<<i<<j<<'\n';
        }
    }
}
