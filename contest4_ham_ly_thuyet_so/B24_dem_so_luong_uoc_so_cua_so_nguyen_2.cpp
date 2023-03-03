#include <iostream>
#include <cmath>

using namespace std ;

long long cnt(long long n )
{
    long long dem = 0 ;
    for(int i=1 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            dem++ ;
            if(i != n/i)
            {
                dem++ ;
            }
        }
    }
    return dem ;
}

int main()
{
    long long n ; cin >> n ;
    cout << cnt(n) ;
    return 0 ;
}