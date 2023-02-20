#include<iostream>

using namespace std ;

int main()
{
    int n , m , a ; cin >> n >> m >> a ;
    int c1 , c2 ;
    if(n%a==0)
    {
        c1 = n/a ;
    }
    else
    {
        c1 = n/a + 1 ;
    }
    if(m%a==0)
    {
        c2 = m/a ;
    }
    else
    {
        c2 = m/a + 1 ;
    }
    cout << 1ll*c1*c2 ;
    return 0 ; 
}