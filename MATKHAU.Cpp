#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MATKHAU.INP ","r",stdin);
freopen("MATKHAU.Out","w ",stdout);
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        for(char ch='A';ch<='Z';ch++)
        {
            int dem=0;
            for(int t=0;t<s.size();t++)
                if(ch==s[t])dem++;
            if(dem==1)
              {
            cout<<ch;
            break;
              }
        }
    }
}
