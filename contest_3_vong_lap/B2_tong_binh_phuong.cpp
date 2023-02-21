#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    long long res = 0 ;
    for(int i=1 ; i<=n ; i++)
    {
        res += 1ll*i*i ;
    }
    cout << res ;
    return 0 ;
}