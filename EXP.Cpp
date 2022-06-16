#include<bits/stdc++.h>
using namespace std;
const int base=1e9+7;
string st;
long long s=0;
long long  a[100001],c[100001], na,nb,nc;
char b[100001];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("EXP.Inp   ","r",stdin);
freopen("EXP.Out ","w ",stdout);
   cin>>st;
    int n=st.size();
   na=nb=nc=0;
   for(int i=0;i<=n-1;i++)
   {
       if('0'<=st[i] and st[i]<='9')
        s=s*10+(st[i]-'0');
       else
       {
           na++;
           a[na]=s;s=0;
           nb++;b[nb]=st[i];
       }
   }
   na++;a[na]=s;
   nc=1;c[nc]=a[1];
   for(int i=2;i<=na;i++)
   {
       if(b[i-1]=='+'){nc++;c[nc]=a[i];}
       else { c[nc]=(c[nc]*a[i])%base;  }
   }
   long long ans=0;
   for(int i=1;i<=nc;i++)
     ans=(ans+c[i])%base;
cout<<ans;

}
