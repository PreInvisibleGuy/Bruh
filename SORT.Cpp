#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[4],b[4],n=3,x=0,m,j,s;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        b[i]=a[i];
     sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i])
        {


            x=x+1;
        }
    }
    if(x==0){
        cout<<x;
        return 0;
    }
    cout<<x-1;
}
