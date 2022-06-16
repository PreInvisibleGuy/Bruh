#include<bits/stdc++.h>
using namespace std;
int n,x[101];
void xuly()
{
    for(int i=n;i>=1;i--)
        cout<<x[i];
    cout<<endl;
}
void Try(int i)
{
    for(int t=1;t>=0;t--)
    {
        x[i]=t;
        if(i==1)
            xuly();
        else
            Try(i-1);
    }
}
int main()
{
   freopen("SBR.INP ", "r", stdin);
   freopen("SBR.OUT", "w", stdout);
    cin>>n;
    Try(n);
}
