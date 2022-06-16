#include<bits/stdc++.h>
using namespace std;
string a;
int s=0,b=0,c=0,x=0,d=0,e=0,u,v,f;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CutString2.Inp   ","r",stdin);
freopen("CutString2.Out ","w ",stdout);
cin>>a;
int n=a.size();
for(int i=0;i<n;i++)
{
    if(a[i]=='a')
        s++;
    else
       x++;

}
for(int i=0;i<n-1;i++)
{
    if(a[i]=='a')
        b++;
    else
         c++;
d=abs(b-c);
u=s-b;
v=x-c;
f=abs(u-v)+d;
e=max(e,f);

}
cout<<e;
}
