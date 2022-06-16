#include<bits/stdc++.h>
using namespace std;
long long n,s;
int chuso(int n) {
    int temp;
    do {
        temp = n % 10;
        n /= 10;
    } while (n > 0);
    return temp;

}
int main()
{
    cin>>n;
    s=n%10;
    cout<<2*(chuso(n)*10+s);
}
