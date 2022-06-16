#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,s=0,e;
    cin>>a>>b>>c;
    while(a>0)
    {
     e=a%10;
     if(e==3 or e==5 or e==7)
     {
      s++;
     }
     a=a/10;
    }
    if(s>=1)
        cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
    s=0;
  while(b>0)
    {
     e=b%10;
     if(e==3 or e==5 or e==7)
     {
      s++;
     }
     b=b/10;
    }
    if(s>=1)
        cout<<"Yes"<<endl;
  else
      cout<<"No"<<endl;
    s=0;
      while(c>0)
    {
     e=c%10;
     if(e==3 or e==5 or e==7)
     {
      s++;
     }
     c=c/10;
    }
    if(s>=1)
        cout<<"Yes"<<endl;
  else
      cout<<"No"<<endl;
}
