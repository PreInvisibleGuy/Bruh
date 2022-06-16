#include <iostream>
using namespace std;
int Dem_UocSo(int N)
{
    int dem = 0;
    for (long long  i = 1; i*i <= N; i++)
    {
        if (N % i == 0)
           {
             dem++;
             int j=N/i;
             if(j!=i)
               dem++;
               }
               }

    return dem;
}

int main()
{
    int N;
    cin >> N;

    int dem = Dem_UocSo(N);
    cout << dem ;
}
