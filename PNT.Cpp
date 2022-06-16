#include<bits/stdc++.h>
using namespace std;
int demuoc(int x)
{
    int dem=0;
    for(int i=1;i*i<=x;i++)
    {
    if(x%i==0)
    {
        if(i*i==x)
            dem++;
        else
            dem=dem+2;
    }
    }
    return dem;
}
int main()
{
    int n,ans=0,s=0,m,k;
    freopen("PNT.Inp","r",stdin);
     freopen("PNT.Out","w",stdout);
    cin>>k;
    while(k--)
    {
        cin>>n;
      for(int i=2;i<=n;i++)
       {

        if(ans<=demuoc(i))
        {
            m=i;
            ans=max(ans,demuoc(i));
        }

       }
    cout<<m<<'\n';
    ans=0;
    }

    }
