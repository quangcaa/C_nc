#include <iostream>
#include <cmath>

using namespace std ;

int MOD = 1e9 + 7 ;

#define ll long long 

int main()
{
    ll n ; cin >> n ;
    int cnt = 0 ;
    for(int i=1 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            if(i%2==0)
            {
                cnt++ ;
            }
            if(n/i % 2 == 0 && i != n/i)
            {
                cnt ++ ;
            }
        }
    }

    cout << cnt ; 
    
    return 0 ;
}