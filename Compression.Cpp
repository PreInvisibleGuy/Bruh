#include<bits/stdc++.h>
using namespace std;
int main()
{

     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("Compression.Inp ","r",stdin);
  freopen("Compression.Out","w ",stdout);
    string a;
    cin>>a;
    long long n=a.size(),s=1;
    for(int i=0;i<n;i++)
    {

        if(a[i]!=a[i+1])
          {
               cout<<s<<a[i];
               s=1;
          }
        else
        {
            s=s+1;
                    }
    }
}
