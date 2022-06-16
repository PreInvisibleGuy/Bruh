#include<bits/stdc++.h>
#define ll long long
using namespace std;
int x[30],n;
void Xuat()
{
    for(int k=1;k<=n;k++) cout<<x[k];
    cout<<endl;
}
void Try(ll i)
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if(i==n) Xuat();
            else Try(i+1);
    }
}
int main()
{
 ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("NP.Inp   ","r",stdin);
freopen("NP.Out ","w ",stdout);
    cin>>n;
    Try(1);
}
