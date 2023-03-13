#include <iostream>
#include <cmath>

using namespace std ;

#define ll long long 

int main()
{
    ll n ; cin >> n ;

    int cnt = 0 ;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            cnt++ ;
            while(n%i==0)
            {
                n/=i ;
            }
        }
    }
    if(n > 1)
    {
        cnt++ ;
    }

    cout << cnt ;

    return 0 ;
}