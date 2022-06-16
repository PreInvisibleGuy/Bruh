#include<bits/stdc++.h>
using namespace std;
bool ktra(int x)
{
    if(x==0 or x==1) return false;
    int dem=0;
    for(int i=1;i*i<=x;i++)
        {
            if(x%i==0) dem++;
        }
    if(dem==1){return true;}
    else {return false;}
}
int main()
{
    int m,n,d=0;
    cin>>m>>n;
    for(int p=2;p<=n;p++)
        {
            for(int q=2;q<=n;q++)
                {
                    if(ktra(p) && ktra(q) && p*q <= n && p*q >= m && p<=q)
                        {
                            d++;
                        }
                }
        }
    cout<<d;
}

