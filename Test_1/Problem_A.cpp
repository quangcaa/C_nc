#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    long long n ; cin >> n ;
    int res = 0 ;
    n = abs(n) ;
    while(n>=10)
    {
        if((n%10) %2 ==0)
        {
            res += n%10 ;
        }
        n/=10 ;
    }
    cout << res ;
    return 0 ;
}