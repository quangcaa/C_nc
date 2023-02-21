#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    char kitu ;
    int resc = 0 ;
    int resdb = 0 ;
    while(cin >> kitu)
    {
        if(kitu == 'C')
        {
            resc++ ;
        }
        if(kitu == '+')
        {
            resdb++ ;
        }
    }
    if(resc>=1 && resdb>=2)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    return 0 ;
}