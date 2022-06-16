#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],t=0;
const int mv=1e5;
bool s[mv+1];
int ktra(int x)
{
    int dem=0;
    for(int i=1;i*i<=x;i++)
        if(x%i==0)
    {
        if(x/i!=i)
            dem=dem+2;
        else
            dem++;
            if(dem>=5)
                return 0;
    }
    if(dem==4)
        return 1;
    return 0;
}
void eratos()
{
    memset(s,true,sizeof s);
    s[1]=false;
    for(int i=1;i<=mv;i++)
    {
        if(ktra(i)==1)
            s[i]=true;
        else
            s[i]=false;    }
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("FourNum.Inp  ","r",stdin);
freopen("FourNum.out ","w ",stdout);
     cin>>n;
     eratos();
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
         if(s[a[i]])
           t++;
     }
     cout<<t;
}
