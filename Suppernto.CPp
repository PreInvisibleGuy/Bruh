#include<bits/stdc++.h>
using namespace std;
int ktra(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int snt(int x)
{
    int dem=0,s=0;
    for(int i=2;i<=10000000;i++)
    {
        if(ktra(i))
        {
            dem++;
            if(ktra(dem))
                s++;
             if(s==x)
             return i;
        }

    }
    return 0;
}
int main()
{
    long long n;
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Suppernto.inp   ","r",stdin);
freopen("Suppernto.out ","w ",stdout);
    cin>>n;
    cout<<snt(n);

}
