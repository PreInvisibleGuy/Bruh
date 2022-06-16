#include<bits/stdc++.h>
using namespace std;
long long n,k,y,s=-1;
int main()
{
    cin>>y>>k>>n;
    for(int x=1;x<=n-y;x++)
    {
       if((x+y)%k==0)
       {
           cout<<x<<' ';
           s=1;
       }
    }
    if(s==-1)
    {
        cout<<s;

    }
}
