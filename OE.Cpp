#include<bits/stdc++.h>
using namespace std;
int a[100001],n,s=0,x=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("OE.Inp    ","r",stdin);
freopen("OE.out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2!=0)
                x++;
        }
        else
        {
            if(a[i]%2==0)
                s++;
        }
    }
    if(x+s==n)
    {
        cout<<'D'<<endl;
    }
    else
        cout<<'K'<<endl;

}
