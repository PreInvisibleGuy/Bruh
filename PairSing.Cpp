#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a[6],b[6],s=0;
     freopen("PairSing.Inp ","r",stdin);
  freopen("PairSing.Out","w",stdout);
    for(int i=1;i<=5;i++)
        cin>>a[i];
    for(int i=1;i<=5;i++)
        cin>>b[i];
    sort(a+1,a+1+5);
    sort(a+1,a+1+5);
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(a[i]==b[j])
                s++;
        }
    }
    cout<<s;
}
