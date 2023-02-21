#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int a , b ; 
    char dau ; 
    cin >> a >> b >> dau ;
    switch(dau)
    {
        case('+'):
            cout << a << " + " << b << " = " << a+b ;
            break ;
        case('-'):
            cout << a << " - " << b << " = " << a-b ;
            break ;
        case('*'):
            cout << a << " * " << b << " = " << a*b ;
            break ;
        case('/'):
            cout << a << " / " << b << " = " << fixed << setprecision(2) << 1.0*a/b ;
            break;
        case('%'):
            cout << a << " % " << b << " = " << a%b ;
            break ;
    }
    return 0 ;
}