#include<bits/stdc++.h>
using namespace std;
int m,t,q,l,s=0,x=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("penalty.Inp  ","r",stdin);
freopen("penalty.Out","w ",stdout);
    cin>>m;
    while(m--)
    {
        s=x=0;
        cin>>t>>q>>l;
        int n=l;
        for(int i=l;i>=2;i--)
        {
            if(t%i==0)
            {
                s++;
                t--;
            }
            if(q%i==0)
            {
                    x++;
                    q--;
            }

        }
    cout<<s<<' '<<x<<'\n';

    }
}
