#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d[6];
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("TwoSum.INP  ","r",stdin);
   freopen("TwoSum.Out ","w ",stdout);
    cin>>a>>b>>c;
    d[1]=a+b;
    d[2]=b+c;
    d[3]=a+c;
    sort(d+1,d+1+3);
    cout<<d[1]<<endl;
    for(int i=2;i<=3;i++)
          if(d[i]!=d[i-1])
        {
            cout<<d[i]<<endl;
        }

}
