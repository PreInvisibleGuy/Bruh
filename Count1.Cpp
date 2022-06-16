#include<bits/stdc++.h>
using namespace std;
long long n,s=0;
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
freopen("Count1.Inp   ","r",stdin);
freopen("Count1.Out","w ",stdout);
    cin>>n;
  for(int i=1;i<=n;i++)
  {
      if(check(i))
         s++;

  }
  cout<<s;

}
