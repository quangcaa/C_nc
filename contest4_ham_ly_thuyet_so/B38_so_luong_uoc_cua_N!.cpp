#include <iostream>
#include <cmath>

using namespace std ;

const int MOD = 1e9 + 7 ;

long long sogt(long long n , long long p)
{
    long long ans = 0 ;
    for(int i=p ; i<=n ; i*=p)
    {
        ans += n/i ;
    }
    return ans ;
}

int nt(long long n)
{
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            return 0 ;
        }
    }
    return n > 1 ;
}


int main()
{
    long long n ; cin >> n ;
    long long uoc = 1 ;
    for(long long i=2 ; i<=n ; i++)
    {
        if(nt(i))
        {
            uoc *= (sogt(n , i) + 1) ;
            uoc %= MOD ;
        }
    }
    cout << uoc ; 
    return 0 ;
}