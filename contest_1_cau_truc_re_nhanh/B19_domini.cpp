#include<iostream>

using namespace std ;

int main()
{
    int m , n ; cin >> m >> n ;
    long long so1 = 1ll * (m/2) * n ;
    if(m%2==0)
    {
        cout << so1 ;
    }
    else 
    {
        cout << so1 + n/2 ;
    }
    return 0 ;
}