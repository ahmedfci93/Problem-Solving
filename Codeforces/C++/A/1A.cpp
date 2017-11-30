#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int n, m;//size of rectangular square
    int a;//side of flagstone
    double ncount, mcount,i;
    long long int total;
    cin >> n >> m >> a;
    ncount = (double) n/a;
    mcount =(double) m/a;
    total = ceil (+ncount) * ceil (+mcount) ;
    cout << total;
    return 0;
}