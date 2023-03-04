#include <cmath>
#include <iostream>

using namespace std;

typedef long long ll;

ll isPN(ll n)
{
    if(n<1)
    {
        return 0 ;
    }
    ll res = 1;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res += i;
            if (i != n / i)
            {
                res += n / i;
            }
        }
    }
    if (res == n && n != 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ll n;
    cin >> n;
    if (isPN(n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
