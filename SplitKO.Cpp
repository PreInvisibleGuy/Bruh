#include<bits/stdc++.h>
using namespace std;
int a[10001],n,k,t;
void solve()
{
    long long sum=0,s=0,dem=0;
    for(int i=1;i<=n;i++)
        sum+=a[i];
    if(k==1)
    {

               if(sum%2!=0)
            {
                cout<<"Yes"<<'\n';
                return ;

            }
            else
                {
                    cout<<"No"<<'\n';return ;
            }

    }
    for(int i=1;i<=n;i++)
    {
        s=s+a[i];
        sum=sum-a[i];
        if(s%2!=0)
        {
            dem++;
            s=0;
            if(dem==k-1)
           {
               if(sum%2!=0)
            {
                cout<<"Yes"<<'\n';
                return ;

            }
            else
                {
                    cout<<"No"<<'\n';return ;
                }

           }
        }

    }
    cout<<"No"<<'\n';

}
int main()
{
      freopen("SplitKO.Inp ","r",stdin);
    freopen("SplitKO.Out","w",stdout);
     cin>>t;
     while(t--)
     {
         cin>>n>>k;
         for(int i=1;i<=n;i++)
            cin>>a[i];
        solve();
     }
}
