#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    long long res = 0 ;
    for(int i=0 ; i<=n ; i+=3)
    {
        res += i ;
    }
    cout << res ;
    return 0 ;
}