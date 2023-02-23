#include<iostream>

using namespace std ;

int main()
{
    long long n ; cin >> n ;
    int res = 0 ;
    while(n)
    {
        res += n%10 ;
        n/=10 ;
    }
    cout << res ;
    return 0 ;
}