#include<iostream>

using namespace std ;

int main()
{
    long long n ; cin >> n ;
    long long gio = n/3600 ; n%=3600 ;
    long long phut = n/60 ; n%=60 ;
    long long giay = n ;
    cout << gio << "h : " << phut << "m : " << giay << "s" ;
    return 0 ; 
} 