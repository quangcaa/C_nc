#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

ll phiEuler(ll n)
{
    ll ans = n ;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            ans -= ans/i ;
            while(n%i==0)
            {
                n /= i ;
            }
        }
    }
    if(n != 1)
    {
        ans -= ans/n ;
    }
    return ans ;
}

int main()
{
    ll n;
    cin >> n;
    cout << phiEuler(n) ;
    return 0;
}