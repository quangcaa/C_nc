#include <iostream>

using namespace std ;

int lp(long long n )
{
    while(n)
    {
        if(n%10 != 0 && n%10 != 6 && n%10 != 8)
        {
            return 0 ;
        }
        n/=10 ;
    }
    return 1 ;
}


int main()
{
    long long n ; cin >> n ;
    cout << lp(n) ;
    return 0 ;
}