#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int bia = n/28 ;
    int cnt = bia ;
    while(bia>2)
    {
        int them = bia/3 ;
        bia%=3 ;
        bia+=them ;
        cnt += them ; 
    }
    cout << cnt ; 
    return 0 ;
}