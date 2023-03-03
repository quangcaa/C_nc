#include <iostream>
#include <cmath>

using namespace std ;

bool cp(long long n)
{
    long long can = sqrt(n) ;
    return can*can == n ;
}

int main()
{
    long long n ; cin >> n ;
    if(cp(n))
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    return 0 ;
}