#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10001],s=0;
    string st;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("KhaoSatGia.Inp  ","r",stdin);
freopen("KhaoSatGia.Out","w ",stdout);
    cin>>n;
    while(n--)
    {
        cin>>st;
        int m=st.size();
        cout<<st[0];
        st.erase(0,1);
        sort(st.begin(),st.end());
        cout<<st[0]<<endl;
        s=s+st[0]-'0';
    }
    cout<<s;

}
