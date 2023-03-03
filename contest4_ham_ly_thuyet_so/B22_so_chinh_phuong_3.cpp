#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    long long a , b ; cin >> a >> b ;
    long long cnt = 0 ;
    for(int i=(sqrt(a)+0.99) ; i<=sqrt(b) ; i++)
    {
        cnt++ ;
    }
    cout << cnt ; 
    return 0 ;
}