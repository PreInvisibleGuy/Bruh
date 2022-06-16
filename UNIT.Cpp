#include<bits/stdc++.h>
using namespace std;
long long p,q,m,s,l;
int main()
{
    cin>>p>>q>>m;
    cin>>l;
    long long n=p;
    while(l>0)
    {
        if(n%(q+m)==0)
        {
            n=m*n+1;
        }
        else
            n=q*n+2;
            l--;
    }
    cout<<s%10;

}
