#include<bits/stdc++.h>
using namespace std;
int ktra(string x)
{
    string y=x;
    reverse(x.begin(),x.end());
    int dem=0;
    for(int i=0;i<x.size();i++)
        if(x[i]!=y[i])
           dem++;
    if(dem<=2)
        return 1;
    return 0;
}
int main()
{
   // freopen("GDX.INP ", "r", stdin);
  // freopen("GDX.OUT", "w", stdout);
    int q,ans=0,s=0;
    string a;
    cin>>q;
    while(q--)
    {
        cin>>a;
        int dem=0;
        int n=a.size();
        string x="",y="";
            if(ktra(x)==1 and ktra(y)==1)
            {
              s++;
            }
    }
    cout<<s;
}
