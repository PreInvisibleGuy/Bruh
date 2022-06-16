#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,dem=0;
    string a;
    cin>>t;
    int x,y,s;
    while(t--)
    {
        cin>>a;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {

                x=y=s=0;
                for(int t=i;t<=j;t++)
                    if(a[t]=='0')
                      x++;
                  else
                  {
                         if(a[t]=='1')
                            y++;
                  }

                if(x<y)
                {
                    for(int t=i;t<=j;t++)
                      if(a[t]=='0')
                      {
                       a[t]==' ';s++;
                      }
                }
                else
                {
               for(int t=i;t<=j;t++)
                      if(a[t]=='1')
                      {
                        a[t]=' ';s++;
                      }
                }

            }
        }
    cout<<s<<endl;
    }
}
