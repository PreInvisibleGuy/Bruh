#include<bits/stdc++.h>
using namespace std;
const long long m=1e9+7;
const int mv=1e7;
bool nt[mv+1];
void eratos()
{
    memset(nt,true,sizeof nt);
    nt[1]=false;
for(int i = 1; i <= sqrt(mv); i++)
    {
        if(nt[i])
        {
            int t=i;
            while(t*i<=mv)
            {
                nt[t*i]=false;
                t++;
            }
        }
    }
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("NT.Inp", "r", stdin);
    freopen("NT.Out", "w", stdout);
    eratos();
    int l,r;
    long long s=0,k=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        if(nt[i])
        {
            k++;
            s=(s+i*k)%m;
        }
    }
    cout<<s;

}

