#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],q,t,b[100001],c[100001],u,v,s=0,x=0;
bool ktra(int u,int v)
{
    int dem=0,d=0;

    for(int i=u+1;i<=v;i++)
        if(a[i]>=a[i-1])
          dem++;
          if(dem==v-u)
              return true;
    for(int i=u+1;i<=v;i++)
        if(a[i-1]>=a[i])
           d++;
       if(d==v-u)
        return true;
       return false;
}
int main()
{
         ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CheckMono.Inp ","r",stdin);
freopen("CheckMono.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>q;

    for(int t=1;t<=q;t++)
    {
        cin>>u>>v;
        if(ktra(u,v)==1)
        {
            cout<<"YES"<<'\n';
        }
        else
             cout<<"NO"<<'\n';
    }

}
