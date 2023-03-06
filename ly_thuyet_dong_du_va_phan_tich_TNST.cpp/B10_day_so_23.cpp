#include <iostream>
#include <cmath>

using namespace std ;

const int MOD = 1e9 + 7 ;

int main()
{
    int n ; cin >> n ;
    long long f1 = 1 , f2 = 1 ;
    long long fn ; 
    if(n==1 || n==2)
    {
        cout << 1 ;
        return 0 ;
    }
    for(int i=3 ; i<=n ; i++)
    {
        fn = 1ll*f1*2 + 1ll*f2*3 ;
        fn %= MOD ;
        f2 = f1 ;
        f1 = fn ;
    }
    cout << fn ;
    return 0 ;
}