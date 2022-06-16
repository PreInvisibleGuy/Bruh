#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int k,s=1,dem=0;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("TANSO.Inp","r",stdin);
freopen("TANSO.out","w",stdout);
    cin>>k;
    cin>>a;
    for(int i=0;i<a.size();i++)
        if(a[i]>='a' and a[i]<='z')
    {
         a[i]=a[i]-32;
    }

    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==a[i-1])
            s++;
        else
        {
            if(s>=k)
                 dem++;
            s=1;
        }
    }
    cout<<dem;
}
