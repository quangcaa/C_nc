#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>

using namespace std ;

int main()
{
    int a , b , c ; cin >> a >> b >> c ;
    if(a>0 && b>0 && c>0 && a+b>c && b+c>a && c+a>b)
    {
        if(a==b && b==c)
        {
            cout << "1" ;
        }
        else if(a==b || b==c)
        {
            cout << "2" ;
        }
        else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
        {
            cout << "3" ;
        }
        else
        {
            cout << "4" ;
        }
    }
    else
    {
        cout << "INVALID" ;
    }
    return 0 ;
}