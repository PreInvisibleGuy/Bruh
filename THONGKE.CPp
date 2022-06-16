#include<bits/stdc++.h>
using namespace std;
int a[1000001],n,s[1000001];
int main()
{
         ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("THONGKE.INP", "r", stdin);
    freopen("THONGKE.OUT", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string ho,ten,tlot;
        cin>>ho>>ten>>tlot;
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int kc=0,x,y;
    for(int i=1;i<n;i++)
    {
        if(a[i+1]-a[i]-1>kc)
        {
            kc=a[i+1]-a[i]-1;
            x=a[i]+1;y=a[i+1]-1;
        }
    }
    if(kc>0)
    {
    cout<<kc<<endl;
    cout<<x<<' '<<y;
}
else
    cout<<-1;

}
