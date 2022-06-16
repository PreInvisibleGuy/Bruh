#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,s=0,dem,i;
     freopen("GNum.Inp ","r",stdin);
    freopen("GNum.Out","w",stdout);
    cin >> x;
   i=2;
   while(i*i<=x)
   {
       while(x%i==0)
       {
           s++;x=x/i;
       }
       i++;
   }
  s=s+(x>1);
  cout<<s;


}

