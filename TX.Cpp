#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[200002],x=0;
     freopen("TX.Inp","r",stdin);
    freopen("TX.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=2*n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=2*n;i++)
    {
        x=x+a[i];
    }
    cout<<x<<endl;
    for(int i=1;i<=2*n;i++)
    {
        x=x-a[i]-a[2*n-i+1];
        cout<<x<<endl;
        if(i==n-1)
            {
               cout<<" ";
             break;
            }
            }

}
