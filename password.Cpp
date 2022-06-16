#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t,s,z,x;
    cin>>t;
   for(int q=1;q<=t;q++)
   {
       cin>>a;
       int n=a.size();
       if(n>=8)
       {
           for(int i=0;i<n;i++)
           {
               if(a[i]>='a' and a[i]<='z')
                  s=1;
               if(a[i]>='A' and a[i]<='Z')
                 x=1;
               if(a[i]>='1' and a[i]<='9')
                   z=1;
           }
           if(s==1 and z==1 and x==1)
           {
               cout<<"Y";
           }
           else
             cout<<"N";

       }
       else
       {
           cout<<"N";
       }
       s=0,x=0,z=0;

   }
}
