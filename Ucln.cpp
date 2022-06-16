#include<bits/stdc++.h>
using namespace std;
const int mv=1e6;
int n,a[111],dem[mv+1];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        int x=a[i];
        for(int e=2;e<=x;e++)
        {
            int s=0;
            while(x%i==0)
            {
                s++;
                x=x/e;
            }
            dem[e]+=s;
        }
    }
    int ans1=1;
    for(int e=2;e<=mv;e++)
    {
        int lt=dem[e]/n;
        ans1=ans1*pow(e,lt);
    }
    int ans2=0;
    for(int i=1;i<=n;i++)
    {
        int x=a[i];
        for(int e=2;e<=x;e++)
        {
         int s=0;
         while(x%e==0)
         {
             s++;x=x/e;
         }
         if(s<dem[e]/n)
            ans2+=(dem[e]/n-s);
        }
    }
    cout<<ans1<<' '<<ans2;

}
