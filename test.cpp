#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    int n ; cin >> n ;

    int can = sqrt(n) ;
    if(can*can == n)
    {
        cout << 4*can ;
    }
    else
    {
        while(n%can != 0)
        {
            can-- ;
        }
        cout << 2*(can+n/can) ;
    }

    return 0 ;
}