#include <iostream>

using namespace std;

typedef long long ll;

void in1(ll n, int a[])
{
    while (n)
    {
        int x = n % 10;
        if (x == 2 || x == 3 || x == 5 || x == 7)
        {
            a[x]++;
        }
        n /= 10;
    }
    for (int i = 2; i <= 9; i++)
    {
        if (a[i])
        {
            cout << i << " " << a[i] << endl;
        }
    }
    return;
}

void in2(ll n, int a[])
{
    ll rev = 0;
    while (n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    while (rev)
    {
        int x = rev % 10;
        if (a[x])
        {
            cout << x << " " << a[x] << endl;
            a[x] = 0;
        }
        rev /= 10;
    }
    return;
}

int main()
{
    ll n;
    cin >> n;
    int a[10] = {0};
    in1(n, a);
    cout << endl;
    in2(n, a);
    return 0;
}