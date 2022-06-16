#include<bits/stdc++.h>
using namespace std;
bool stm(int a){
    int b=a;
    while(b>0){
        int c = b%10;
        a-=c*c*c;
        b/=10;
    }
    return a==0;
}

int main(){
   long long n;
   cin>>n;
   for(int i=0;i<n;i++)
  {
if(stm(i)==1)
     {
cout<<i<<'\n';
     }
     if(i>500)
     return 0;
  }
}
