#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long cs0 = 0;

    // legendre
    while (n > 0)
    {
        n /= 5;
        cs0 += n;
    }
    int res = cs0 % (int)(1e9+7) ;
    cout << res  ;
    return 0;
}