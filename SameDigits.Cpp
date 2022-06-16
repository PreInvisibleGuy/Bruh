#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,e,y;
     freopen("SameDigits.Inp","r",stdin);
    freopen("SameDigits.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x<=9)
            cout<<x<<endl;
        else{
            y=x;
            e=0;
            while(y>0)
            {
                e=e*10+1;
                y=y/10;
        }
        for(int t=1;t<=9;t++)
            if(e*t>=x)
        {
            cout<<e*t<<endl;
            break;
        }



        }
    }

}
