#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[10];
    char pt[10];
   freopen("BieuThuc2.Inp","r",stdin);
   freopen("BieuThuc2.Out","w",stdout);
    for(int i=1;i<=5;i++)
        cin>>a[i];
    for(int i=1;i<=4;i++)
        cin>>pt[i];
    int s[10];
    char pp[10];
    int i,j;
    i=j=1;
    s[1]=a[1];
     pp[1]=pt[1];
   if(pp[j]=='*')
   {
       s[i]=s[i]*a[2];
       j--;
   }
   else
   {
       i++;
       s[i]=a[2];

   }
   j++;
       pp[j]=pt[2];
   if(pp[j]=='*')
   {
       s[i]=s[i]*a[3];
       j--;
   }
   else
   {
       i++;
       s[i]=a[3];

   }
    j++;
       pp[j]=pt[3];
   if(pp[j]=='*')
   {
       s[i]=s[i]*a[4];
       j--;
   }
   else
   {
       i++;
       s[i]=a[4];

   }
     j++;
       pp[j]=pt[4];
   if(pp[j]=='*')
   {
       s[i]=s[i]*a[5];
       j--;
   }
   else
   {
       i++;
       s[i]=a[5];

   }
    int e=1,ss=s[1];
    while(e<i)
    {
        if(pp[e]=='+')
             ss=ss+s[e+1];
        else
            ss=ss-s[e+1];
        e++;
    }
    cout<<ss;
}
