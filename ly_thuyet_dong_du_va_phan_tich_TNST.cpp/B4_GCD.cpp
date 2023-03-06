#include <iostream>

using namespace std ;

int gcd(int a , int b)
{
    if(b == 0)
    {
        return a ;
    }
    else
    {
        return gcd(b , a%b) ;
    }
}

int lcm(int a , int b)
{
    return a*b / gcd(a,b) ;
}

int main()
{
    int a , b , c , d ; cin >> a >> b >> c >> d ;
    int x = gcd(gcd(a,b) , gcd(c,d)) ;
    int y = lcm(lcm(a,b) , lcm(c,d)) ;
    cout << x << " " << y ;
    return 0 ;
}