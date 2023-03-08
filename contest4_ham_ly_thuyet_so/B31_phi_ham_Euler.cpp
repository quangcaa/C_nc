#include <iostream>

using namespace std;

typedef long long ll;

int ucln(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return ucln(b, a % b);
    }
}

int main()
{
    ll n;
    cin >> n;
    ll cnt = 1;
    if (n % 2 == 0)
    {
        for (int i = 3; i <= n; i += 2)
        {
            if (ucln(n, i) == 1)
            {
                cnt++;
            }
        }
    }
    else
    {
        for (ll i = 2 ; i <= n; i++)
        {
            if (ucln(n, i) == 1)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}