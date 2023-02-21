#include<iostream>

using namespace std ;

int main()
{
    int h , m ; 
    cin >> h >> m ;
    int res = 0 ;
    res += h*60 + m ;
    cout << 24*60 - res ;
    return 0 ;
}