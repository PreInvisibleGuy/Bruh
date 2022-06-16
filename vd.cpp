#include<bits/stdc++.h>
using namespace std;
bool dp[5005][5005];
int main()
{
   string s;
   cin>>s;
   int r=1;
   for(int i=0;i<s.size();i++)
   {
       int u=i,v=i;
       while(u>=0 and v<s.size())
       {
            if(s[u]==s[v])
            {
                r=max(r,v-u+1);
                u--;v++;
            }
            else
                break;
       }

       }
for(int i=0;i<s.size()-1;i++)
       {
          int u=i,v=i+1;
          while(u>=0 and v<s.size())
          {
               if(s[u]==s[v])
               {
                   r=max(r,v-u+1);
                   u--;v++;
               }
               else
                break;
          }
}
 cout<<r;
}
