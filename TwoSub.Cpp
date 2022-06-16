#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d[10];
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TwoSub.INP  ","r",stdin);
freopen("TwoSub.Out ","w ",stdout);
    cin>>a>>b>>c;
    d[1]=a-b;
    d[2]=b-a;
    d[3]=a-c;
    d[4]=c-a;
    d[5]=b-c;
    d[6]=c-b;
    sort(d+1,d+1+6);
    cout<<d[1]<<endl;
    for(int i=2;i<=6;i++)
    {
        if(d[i]!=d[i-1])
              cout<<d[i]<<endl;
    }


}
