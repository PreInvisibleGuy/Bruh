#include<bits/stdc++.h>
using namespace std;
int a[100001],n;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MINMAXSEQ.INP","r",stdin);
freopen("MINMAXSEQ.OUT ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int mina=*min_element(a+1,a+1+n);
    int maxa=*max_element(a+1,a+1+n);
    if(mina==maxa)
    {
        cout<<1;return 0;
    }
    int vma=0,vmi=0,ans=n;
    for(int j=1;j<=n;j++)
    {
        if(a[j]==mina)
        {
            if(vma>0)
                ans=min(ans,j-vma+1);
                vmi=j;
        }
        if(a[j]==maxa)
        {
           if(vmi>0) ans=min(ans,j-vmi+1);
           vma=j;

        }
    }
    cout<<ans;
}
