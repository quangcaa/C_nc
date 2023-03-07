#include <cmath>
#include <iostream>

using namespace std;

int checkF(long long n)
{
    long long f1 = 1, f2 = 1;
    if(n == 1 || n == 0 )
    {
        return 1 ;
    }
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
    for (int i=1 ; i<=n ; i++)
    {
        long long x ; cin >> x ;
        if(checkF(x))
        {
            cout << "YES\n" ;
        }
        else
        {
            cout << "NO\n" ;
        }
    }
    return 0;
}