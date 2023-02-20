#include<iostream>

using namespace std ;

int main()
{
    int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    if(b%a==0 && c%b==0 && d%c==0)
    {
        if(b%a==c%b && d%c==c%b)
        {
            cout << "YES" ;
        }
        else
        {
            cout << "NO" ;
        }
    }
    else
    {
        cout << "NO" ;
    }
    return 0 ;
}