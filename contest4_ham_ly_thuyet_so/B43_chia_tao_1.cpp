#include <iostream>

using namespace std ;

const int MOD = 1e9 + 7 ;

long long cach(int apple , int box)
{
    long long ans = 1 ;
    for(int i=0 ; i<=box ; i++)
    {
        ans *= (apple-i) ;
        ans /= (i+1) ;
        ans %= MOD ;
    }
    return ans ;
}

int main()
{
    int n , m ; cin >> n >> m ;
    if(n<m)
    {
        cout << '0' ;
        return 0 ;
    }
    cout << cach(n-1 , m-1) ;
    return 0 ;
}