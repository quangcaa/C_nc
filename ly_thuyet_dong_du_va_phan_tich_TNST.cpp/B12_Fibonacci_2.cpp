#include <iostream>

using namespace std;

int checkF(long long n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    long long f1 = 1, f2 = 0;
    for (int i = 2; i <= 92; i++)
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
    long long n;
    cin >> n;
    if (checkF(n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}