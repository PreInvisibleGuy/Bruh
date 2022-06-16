#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,x,d,e,f;
    cin>>a>>b>>c;
    cin>>x;
    d=abs(a-x)+abs(b-x)+abs(c-x);
    if(d%x==0)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";


}
