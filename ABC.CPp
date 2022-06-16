#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s=0;
    string st;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("ABC.INP  ","r",stdin);
freopen("ABC.Out","w ",stdout);
    cin>>st;
    int n=st.size();
    s=0;
    for(int i=0;i<n;i++)
       for(int j=i+1;j<n;j++)
{
    int xa=0,xb=0,xc=0;
    for(int t=i;t<=j;t++)
      {
        if(st[t]=='A')xa++;
        if(st[t]=='B')xb++;
        if(st[t]=='C')xc++;

      }
     if(xa==xb and xa==xc and j-i+1==xa+xb+xc)
         s++;
    }
cout<<s;
}
