#include<bits/stdc++.h>
using namespace std;
int n,dem=0,s=0;
string a;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Bai1.INP ","r",stdin);
freopen("Bai1.Out","w ",stdout);
    cin>>n;
    while(n--)
    {
        cin>>a;
        for(int i=0;i<=a.size();i++)
            if(a[i]=='a' or a[i]=='i' or a[i]=='u' or a[i]=='e' or a[i]=='o' or a[i]=='y')
                  s=1;
             else
                if(s==1)
             {
                 s=0;
                 dem++;
             }
    }
    cout<<dem;
}
