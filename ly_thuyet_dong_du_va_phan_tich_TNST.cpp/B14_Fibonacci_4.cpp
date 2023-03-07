#include <cmath>
#include <iostream>

using namespace std;

int tong(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

int checkTong(int n)
{
    long long f1 = 1, f2 = 1;
    for (int i = 2 ; i<=92 ; i++)
    {
        long long fn = f1 + f2;
        if (fn == n)
        {
            return 1;
        }
        f2 = f1;
        f1 = fn;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    for (int i=2; i<=n ; i++)
    {
        if (nt(i) && checkTong(tong(i)))
        {
            cout << i << " " ;
        }
    }
    return 0;
}