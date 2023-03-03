#include <iostream>
#include <cmath>

using namespace std ;

long long maxPower (long long n , long long p)
{
    long long mu = 0 ;
    while(n>0)
    {
        n/=p ;
        mu += n ;
    }
    return mu ;
}


int main()
{
    long long n , p ; cin >> n >> p ;
    cout << maxPower(n,p) ; 
    return 0 ;
}