#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,e,f,k,y;
    // freopen("SameDigitsMin.Inp","r",stdin);
  //freopen("SameDigitsMin.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x<=9)
            {
                cout<<x<<endl;
                continue;
            }
        k=x;
        e=0;
        while(k>0)
            {
                e=e*10+1;
                k=k/10;
            }
            y=0;
            for(int t=9;t>=1;t--)
            {
                f=e*t;
                 if(f<=x)
                 {
                     cout<<f<<endl;
                     y=f;
                     break;
                 }
            }
            if(y==0)
            {
                e=e/10;
                cout<<e*9<<endl;
            }



        }
    }


