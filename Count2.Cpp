#include<bits/stdc++.h>
using namespace std;
long long n,s=0,x=1;
bool check(int x)
{
if(x<=10)
    return true;
 int e=x%10;
 x=x/10;
while(x>0)
{
    if(x%10==e)
        return false;
    e=x%10;
    x=x/10;
}
return true;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("Count2.Inp   ","r",stdin);
//freopen("Count2.Out","w ",stdout);
    cin>>n;
    if(n==1)
    {
        cout<<10;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        x=x*10;
    }
  for(int i=x/10;i<=x-1;i++)
  {
      if(check(i))
         s++;

  }
  cout<<s;

}

