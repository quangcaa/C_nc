#include <cmath>
#include <iostream>

using namespace std;

long long prime(long long n)
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

void c1(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if(n > 1)
    {
        cout << n ;
    }
    cout << endl;
    return ;
}

void c2(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
        }
        cout << "(" << i << ", " << cnt << ") ";
    }
    if (n > 1)
    {
        cout << "(" << n << ", 1)" << endl;
        return ;
    }
    else
    {
        cout << endl ; 
        return ;
    }
}

void c3(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cout << i ;
                n /= i;
                if(n != 1)
                {
                    cout << " x " ;
                }
            }
        }
    }
    if(n > 1)
    {
        cout << n ;
    }
}

int main()
{
    int n;
    cin >> n;

    if (prime(n))
    {
        cout << n << endl;
        cout << "(" << n << ", 1)" << endl;
        cout << n << endl;
        return 0;
    }

    c1(n) ;
    c2(n) ;
    c3(n) ;

    return 0;
}