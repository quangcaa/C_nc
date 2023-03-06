#include <cmath>
#include <iostream>

using namespace std;

typedef long long ll;

int pN(ll n)
{
    for(int i=2 ; i<=31 ; i++)
    {
        long long sum = pow(2,i-1) * (pow(2,i) - 1) ;
        if(n == sum)
        {
            return 1 ;
        }
    }
    return 0 ;
}

int main()
{
    ll n;
    cin >> n;
    if(pN(n))
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    return 0;
}
