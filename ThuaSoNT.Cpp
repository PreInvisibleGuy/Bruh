#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,dem;
  //  freopen("ThuaSoNT.Inp ","r",stdin);
  //  freopen("ThuaSoNT.Out","w",stdout);
    cin >> n;
    if(n==1)
    {
        cout<<" ";
        return 0;
    }
    for(long long  i = 2; i <= n; i++)
        {
        dem = 0;
        while(n % i == 0)
        {
            ++dem;
            n /= i;
        }
        if(dem){
            cout << i;
            while(dem>1)
            {
                cout<<"."<<i;
                dem--;
            }
            if(n > i){
                cout <<".";
            }
        }
    }

}
