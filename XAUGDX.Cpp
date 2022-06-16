#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    string a;
    bool A,B;
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("XauGDX.Inp  ","r",stdin);
freopen("XauGDX.OUt ","w ",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a;
        A=true;
        B=true;
        for (int j=0;j<a.size()/2;j++)
        {
            if (a[j]!=a[a.size()-1-j])
            {
                if (A==false)
                {
                    B=false;
                    break;
                }
                else   A=false;
            }
        }
        if (B==true)  s++;
    }
    cout<<s;
    return 0;
}
