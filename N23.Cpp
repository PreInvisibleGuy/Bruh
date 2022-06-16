#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s,e,f;
    //  freopen("N23.Inp","r",stdin);
    //freopen("N23.Out","w",stdout);
    cin>>a>>b;
    s=0;
    e=1;
    while(e<=b)
    {
        f=e;
     while(f<=b)
     {
         if(a<=f)
             s++;
        f=f*3;

     }
     e=e*2;
    }
    cout<<s;


}
