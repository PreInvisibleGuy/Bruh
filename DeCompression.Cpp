#include<bits/stdc++.h>
using namespace std;
int main()
{

     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("DeCompression.Inp ","r",stdin);
     freopen("DeCompression.Out","w ",stdout);
    string a;
    cin>>a;
    long long n=a.size();
    char ch;
    int dem=0;
    for(int i=0;i<n;i++)
    {
    if('0'<=a[i] and a[i]<='9')
           dem=dem*10+(a[i]-'0');
    else
    {
        ch=a[i];
      for(int t=1;t<=dem;t++)
          cout<<ch;
       dem=0;
    }
    }
}

