#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10001],k,Ma,Mi;
    float Sum=0,n;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        Sum=Sum+a[i];
    }
    Ma=a[1],Mi=a[1];
    for(int i=1;i<=n;i++)
        if(a[i]<Mi)
            Mi=a[i];
    for(int i=1;i<=n;i++)
        if(Ma<a[i])
            Ma=a[i];
    cout<<"So be nhat trong day:"<<Mi<<endl;
    cout<<"So lon nhat trong day:"<<Ma<<endl;
    cout<<"Trung binh cong cua day la:"<<setprecision(2)<<fixed<<Sum/n*1.0<<endl;
    cout<<"Phan tu thu k la:"<<a[k]<<endl;

}
