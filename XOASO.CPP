#include<bits/stdc++.h>
using namespace std;
string x;
int n,k,s=0,xoa=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("XOASO.INP  ","r",stdin);
freopen("XOASO.OUT","w ",stdout);
cin>>k;
cin>>x;
n=x.size();
while(xoa<k and s==0)
{
s=1;
for(int i=1;i<x.size();i++)
{
    if(x[i-1]<x[i])
    {
        xoa++;
        x.erase(i-1,1);
        s=0;
        break;
    }
}
}
if(xoa<k)
{
int m=x.size();
int e=k-xoa;
x.erase(m-e,e);
}
cout<<x;
}

