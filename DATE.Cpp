#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,n,m;
   freopen("DATE.Inp  ","r",stdin);
    freopen("DATE.Out","w",stdout);
    cin>>a>>b>>c;
    cin>>n;
    a=a+n;
    while(a>=30)
     {


        if(b==1 or b==3 or b==5 or b==7)
        {
            b=b+1;
            a=a-31;
        }

        else
            if(b==2)
        {
          b=b+1;
          a=a-28;
          if(c%4==0 and c%100!=0)
            a=a-1;
        }
        else
        if(b==4 or b==6)
         {
             b=b+1;
             a=a-30;
         }
         else
         if(b==9 or b==11)
         {
              b=b+1;
              a=a-30;

         }

         else
            if(b==8 or b==10 or b==12)
         {
             b=b+1;
             a=a-31;



    }
     if(b==13)
        {
            b=b-12;
            c=c+1;
        }

    if(a==0)
        a=a+1;

    }

    cout<<a<<" "<<b<<" "<<c;
}
