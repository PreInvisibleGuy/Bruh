#include <bits/stdc++.h>
using namespace std;
int tong(int a)
{
    int s=0;
    int i;
    while(a!=0)
    {
        i=a%10;
        s=s+i*i;
        a/=10;
    }
    return s;
}
bool check(int a)
{
    vector<int>kt;
    int i;
    do
    {
        kt.push_back(a);
        a=tong(a);
        for(i=0;i<kt.size();i++)
        {
            if(a==kt[i])
            {
                return false;
            }
        }

    }
    while(a!=1);
    return true;
}
int main()
{
freopen("LIMITED.INP","r",stdin);
freopen("LIMITED.Out","w",stdout);
    int a;
    while(cin>>a)
    {
     for(int i=a+1;i>0;i++)
    {
        if(check(i))
        {
            cout<<i<<'\n';
            break;
        }
    }
    }
}
