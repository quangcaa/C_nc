#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    long long res = 1 ;
    for(int i=1 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            res *= i ;
            if(n/i != i)
            {
                res *= n/i ;
            }
        }
    }
    cout << res ;
    return 0 ;
}