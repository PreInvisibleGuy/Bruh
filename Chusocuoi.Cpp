#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,s=0;
    freopen("Chusocuoi.Inp ","r",stdin);
    freopen("Chusocuoi.Out","w",stdout);
    cin>>n;
    while(n>0)
    {
        x=x+n%10;
        s=s+1;
        n=n/10;
        if(s==4)
        {
            break;
        }
    }
    cout<<x;
}
