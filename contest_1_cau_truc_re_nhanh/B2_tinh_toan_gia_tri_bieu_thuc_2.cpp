#include<iostream>

using namespace std ;

int main()
{
    int a , b , c ; cin >> a >> b >> c ;
    long long res = 1ll*a*(b+c) + 1ll*b*(a+c) ;
    cout << res ;
    return 0 ;
}