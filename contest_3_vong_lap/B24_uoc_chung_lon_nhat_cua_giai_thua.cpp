#include<iostream>
#include<algorithm>

using namespace std ;

int main()
{
    long long a , b ; cin >> a >> b ;
    long long x = min(a,b) ;
    long long res = 1 ;
    for(int i=1 ; i<=x ; i++)
    {
        res *= i ;
    }
    cout << res ;
    return 0 ;
}