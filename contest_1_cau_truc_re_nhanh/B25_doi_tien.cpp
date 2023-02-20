#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int t100 = n/100 ; n%=100 ;
    int t20 = n/20 ; n%=20 ;
    int t10 = n/10 ; n%=10 ;
    int t5 = n/5 ; n%=5 ;
    int t1 = n ;
    cout << t100 + t20 + t10 + t5 + t1 ;
    return 0 ;
}