#include<bits/stdc++.h>
using namespace std;
long long  a[999999],n,x=1;
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
      cin>>a[i];
   sort(a+1,a+1+n);
   for(int i=1;i<=n;i++)
   {
    if(a[i]==a[i+1])
    {
        x=x+1;
   }
   else {
       cout<<a[i]<<" "<<x<<endl;
       x=1;
   }

}
}
