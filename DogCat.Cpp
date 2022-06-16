#include<bits/stdc++.h>
using namespace std;
long long d,n,a[1001];
int solve()
{
    int s,x,saivt;
    s=x=saivt=0;
    for(int i=1;i<=n;i++)
        x=x+(a[i]==0);
    for(int i=1;i<=x;i++)
        saivt+=(a[i]==1);
    int i=x,j=x+1;
    while(saivt--)
    {
        while(a[i]==0)
        {
            i--;
        }
        while(a[j]==1)j++;
        s=s+j-i;
        i--;j++;
    }
    return s;
}
int main()
{
    freopen("DogCat.Inp ","r",stdin);
    freopen("DogCat.Out","w",stdout);
     cin>>d>>n;
     for(int t=1;t<=d;t++)
     {
         for(int i=1;i<=n;i++)
              cin>>a[i];
            cout<<solve()<<endl;


     }
}
