#include<iostream>

using namespace std ;

int main()
{
    long long n , u1 , d ; 
    cin >> n >> u1 >> d ;
    long long res = (n*(2*u1 + d*(n-1)))/2 ;
    cout << res ;
    return 0 ;
}