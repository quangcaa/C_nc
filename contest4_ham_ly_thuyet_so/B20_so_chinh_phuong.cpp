#include <iostream>
#include <cmath>

using namespace std ;

void cp(long long n)
{
    long long x = sqrt(n) ;
    if(x*x == n)
    {
        cout << "YES" ;
        return ;
    }
    cout << "NO" ;
    return ;
}

int main()
{
    long long n ; cin >> n ;
    cp(n) ;
}