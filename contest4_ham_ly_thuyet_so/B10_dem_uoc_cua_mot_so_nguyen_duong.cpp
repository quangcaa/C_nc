#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    int t ; cin >> t ;
    long long cnt = 1 ;
    while(t--)
    {
        int p , e ; cin >> p >> e ;
        cnt *= (e+1) ;
        cnt %= (int)(1e9+7) ;
    }
    cout << cnt ;
    return 0 ;
}