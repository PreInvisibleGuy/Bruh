#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    freopen("Select3.Inp ","r",stdin);
    freopen("Select3.Out","w",stdout);
    cin>>a>>b>>c>>d;
    long long s=a+b+c;
    if(d==a)
       {
           cout<<"YES";
           return 0;
       }
    if(d==b)
    {
        cout<<"YES";
        return 0;
    }
    if(d==c)
    {
        cout<<"YES";
        return 0;
    }
    if(s-a==d)
    {
        cout<<"YES";
     return 0;
    }
    if(a+c==d)
    {
        cout<<"YES";
        return 0;
    }
    if(a+b==s)
    {
        cout<<"YES";
        return 0;
    }
    if(s==d)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
}
