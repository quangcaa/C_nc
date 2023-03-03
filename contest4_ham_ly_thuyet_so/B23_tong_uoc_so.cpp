#include <iostream>
#include <cmath>

using namespace std ;

long long sum(long long n )
{
    long long res = 0 ;
    for(int i=1 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            res += i ;
            if(i != n/i)
            {
                res += n/i ;
            }
        }
    }
    return res ;
}

int main()
{
    long long n ; cin >> n ;
    cout << sum(n) ;
    return 0 ;
}