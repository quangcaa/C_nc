#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int tong(ll n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool smith(ll n)
{
    int tong1 = tong(n) ;
    int tong2 = 0 ;
    int tmp = n ;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                tong2 += tong(i) ;
                n /= i ;
            }
        }
    }
    if(tmp == n)
    {
        return false ;
    }
    if(n > 1)
    {
        tong2 += tong(n) ;
    }
    return tong1 == tong2 ;
}

int main()
{
    ll n;
    cin >> n;
    if(smith(n))
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    return 0 ;
}