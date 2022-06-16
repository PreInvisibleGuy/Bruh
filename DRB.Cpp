#include<bits/stdc++.h>
using namespace std;
long long s1,v1,s2,v2;
int main()
{
    cin>>s1>>v1;
    cin>>s2>>v2;
    if(s1<s2 and v1<v2)
    {
        cout<<-1;
        return 0;
    }
    if(s1>s2 and v1>v2)
    {
        cout<<-1;
        return 0;
    }
    long long x=abs(s1-s2);
    long long s=abs(v1-v2);
    cout<<x/s;





}
