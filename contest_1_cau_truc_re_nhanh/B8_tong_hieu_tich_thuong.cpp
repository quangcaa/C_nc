#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int a , b ;
    cin >> a >> b ;
    cout << a+b << endl << a-b << endl ;
    cout << 1ll*a*b << endl ;
    if(b==0)
    {
        cout << "INVALID" ;
    }
    else
    {
        cout << fixed << setprecision(4) << 1.0*a/b ;
    }
}