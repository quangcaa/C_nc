#include <iostream>
#include <cmath>

using namespace std ;

long long prime(long long n)
{
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

int main()
{
    long long n ; cin >> n ;
    int max_val = 0 ;
    int mu_val = 0 ;
    if(prime(n))
    {
        cout << n << " 1" ;
        return 0 ;
    }
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        int cnt = 0 ;
        if(n%i==0)
        {
            while(n%i==0)
            {
                cnt++ ;
                n/=i ;
            }
        }
        if(cnt > mu_val)
        {
            mu_val = cnt ;
            max_val = i ;
        }
    }
    if(n > 1)
    {
        if(max_val == 0)
        {
            mu_val = 1 ;
            max_val = n ;
        }
    }
    cout << max_val << " " << mu_val ; 
    return 0 ;
}