#include <iostream>

using namespace std ;

typedef long long ll ;

bool sodep(ll n)
{
    int socuoi = n%10 ;
    long long tmp = n ;
    int sodau ;
    long long luu = 0 ;
    while(tmp)
    {
        sodau = tmp % 10 ;
        tmp /= 10 ;
        if(tmp >= 10)
        {
            luu = luu*10 + tmp%10 ;
        }
    }
    if(sodau != socuoi*2 && socuoi != sodau*2)
    {
        return false ;
    }
    long long lat = 0 , x = luu ;
    while(x)
    {
        lat = lat*10 + x%10 ;
        x/=10 ;
    }
    if(luu != lat)
    {
        return false ;
    }
    return true ;
}


int main()
{
    long long n ; cin >> n ;
    if(sodep(n))
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
}