#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n)
{
    int maxd=*max_element(a+1,a+1+n);
    int b[maxd+1];
    memset(b,0,sizeof b);
    for(int i=1;i<=n;i++)
    {
        b[a[i]]++;
    }


}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
           {
                cin>>a[i];
                a[i]=abs(a[i]);
           }
        cout<<solve(a,n)<<'\n';
    }
}

