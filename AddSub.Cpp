#include<bits/stdc++.h>
using namespace std;
long long n,s,a[21],x=0;
int main()
{
    	freopen("AddSub.Inp ", "r", stdin);
	freopen("AddSub.Out", "w", stdout);
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        x=x+a[i];
    }
    if(x<s)
    {
        cout<<"NO";
        return 0;
    }
    if(x==s)
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
           if(x>s)
           {
               if(x-2*a[i]<s)
               {
                   continue;
               }
               else
                x=x-2*a[i];
               if(x==s)
               {
                   cout<<"YES";
                   return 0;
               }
           }
        }
        cout<<"NO";
    }
}
