#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;
    cin>>n;
    for(int i=3;i<=n;i++)
    {
        s=0;
        for(int j=2;j<i;j++)
            if(i%j==0)
        {
            s=1;
        }
        if(s==0)
            cout<<i<<endl;
    }
}
