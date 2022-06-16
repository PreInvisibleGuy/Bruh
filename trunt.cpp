#include<bits/stdc++.h>
using namespace std;
int n,a[200002],dem=0;
void sub1()
{
    int s=0,x,y;
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
    {
        x=y=a[i];
        for(int t=i;t<=j;t++)
        {
            x=min(x,a[j]);
            y=max(y,a[j]);
        }
        if(x==min(a[i],a[j]) and y==max(a[i],a[j]))
            s++;
    }
    cout<<s;
}
void sub2()
{
    int s=0,x,y;
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
    {
        x=min(x,a[j]);y=max(y,a[j]);
        if(x==min(a[i],a[j]) and y==max(a[i],a[j]))
            s++;
    }
    cout<<s<<endl;
}
int sum3[200002],sum2[200002],Next3[200002],Next1[200002];
void init()
{
    a[n+1]=0;
for(int i=1;i<=n;i++)
{
    sum3[i]=sum3[i-1]+(a[i]==3);
    sum2[i]=sum2[i-1]+(a[i]==2);
}
Next3[n+1]=Next1[n+1]=n+1;
for(int i=n;i>=1;i--)
{
    Next3[i]=Next3[i+1];
    Next1[i]=Next1[i+1];
    if(a[i]==3)
        Next3[i]=i;
    if(a[i]==1)
        Next1[i]=i;
}
}
void sub3()
{
    long long s=0,x=1;
    for(int i=2;i<=n;i++)
        if(a[i]==a[i-1])
        x++;
    else
    {s+=x*(x-1)/2;x=1;
    }
    s+=x*(x-1)/2;
    for(int l=1;l<=2;l++)
    {
        init();
        for(int i=1;i<n;i++)
            if(a[i]==1)
            s=s+sum3[n]-sum3[i];
        for(int i=1;i<n;i++)
            if(a[i]==1)
        {
            int t=Next3[i];
            s=s+(sum2[t]-sum2[i]);
        }
        for(int i=1;i<n;i++)
            if(a[i]==2)
    {
        int t=Next1[i];
        s=s+(sum3[t]-sum3[i]);
    }

    reverse(a+1,a+1+n);
    }
    cout<<s;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("TRUNGTHUONG.INP ","r",stdin);
//freopen("TRUNGTHUONG.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
   if(n<=200)
   {
       sub1();
       return 0;
   }
   if(n<=2000)
   {
       sub2();
       return 0;
   }
   if(n<=200000)
   {
       sub3();
       return 0;
   }
}
