#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    long long a , b ; cin >> a >> b ;
    for(int i=(sqrt(a)+0.99) ; i<=sqrt(b) ; i++)
    {
        if(1ll*i*i >= a)
        {
            cout << 1ll*i*i  << " " ;
        }
    }
    return 0 ;
}