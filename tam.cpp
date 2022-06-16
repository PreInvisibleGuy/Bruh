#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Canh 1:";
    cin>>a;
    cout<<"Canh 2:";
    cin>>b;
    cout<<"Canh 3:";
    cin>>c;
    if((a+b>c) and (b+c>a) and (a+c>b))
        cout<<"3 canh co the tao thanh tam giac";

    else
       cout<<"3 canh khong the tao thanh tam giac";
}
