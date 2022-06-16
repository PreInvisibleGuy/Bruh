#include<bits/stdc++.h>
using namespace std;
int n,a[10001],dem=1;
int ktra(int x)
{
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
        return 0;
    return 1;
}
int main()
{
         ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("HAPPY.INP","r",stdin);
//freopen("HAPPY.OUT","w",stdout);
    cin>>n;
    a[1]=n;
    for(int i=n-1;i>=2;i--)
    {
        if(ktra(i)==1)
        {
            dem++;
            a[dem]=i;
        }
        else
        {
            for(int j=1;j<=dem;j++)
                if(a[j]%i==0)
                {
                    dem++;
                    a[dem]=i;
                }
        }
    }
    cout<<dem<<endl;
    for(int i=1;i<=dem;i++)
        cout<<a[i]<<' ';

}
