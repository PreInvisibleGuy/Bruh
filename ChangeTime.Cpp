#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,x;
      freopen("ChangeTime.Inp","r",stdin);
    freopen("ChangeTime.Out","w",stdout);
    cin>>m>>n;
    cin>>x;
    cout<<m*3600+n*60<<endl;
    long long s=x%3600;
    cout<<(x-s)/3600<<" ";
    cout<<s/60;



}
