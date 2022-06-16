#include<bits/stdc++.h>
using namespace std;
long long  n,a[1001],s=0;
int ktra(long long  n)
{
    int t;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 1;


    }
    return 0;

}
int main()
{

   ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("TNT.Inp","r",stdin);
    freopen("TNT.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
     if(ktra(a[i])==0 and a[i]>1)
        s=s+a[i];
    }
    cout<<s;
}
