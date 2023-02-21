#include<iostream>
#include<algorithm>

using namespace std ;

int main()
{
    int k2 , k3 , k5 , k6 ;
    cin >> k2 >> k3 >> k5 >> k6 ;
    long long res = 0 ;
    int x = min({k2 , k5 , k6}) ;
    res += 1ll*x*256 ;
    k2-=x ;
    int y = min(k2 , k3) ;
    res += 1ll*y*32 ;
    cout << res ;
    return 0 ;
}