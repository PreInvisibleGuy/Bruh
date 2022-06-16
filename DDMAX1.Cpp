#include<bits/stdc++.h>
using namespace std;
int n,k,a[5001],s,i,j;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("DDMAX1.INP ","r",stdin);
  freopen("DDMAX1.Out ","w ",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    while(k--)
    {
        cin>>i>>j;
        s=*max_element(a+i+1,a+j+1);
        cout<<s<<'\n';
    }
}
