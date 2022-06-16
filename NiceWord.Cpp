#include<bits/stdc++.h>
using namespace std;
int n;
string s[101];
int nt(int a)
{
    if(a<2)
        return 0;
    for(int i=2;i*i<=a;i++)
        if(a%i==0)
          return 0;
    return 1;
}
int ktra(string x)
{
    int m=x.size();
    if(x[0]=='a')
    {
        if(nt(m)==1)
           return 1;
        else
            return 0;

    }
    return 0;

}
int main()
{  ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("NiceWord.Inp  ","r",stdin);
freopen("NiceWord.Out ","w ",stdout);
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    for(int i=1;i<=n;i++)
    {
        if(ktra(s[i])==1)
            dem++;
    }
    cout<<dem;
}
