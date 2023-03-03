#include <cmath>
#include <iostream>

using namespace std;

int nt(int n)
{
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

void ntnn(int n)
{
    if (n % 2 == 0)
    {
        cout << "2\n";
    }
    else if(nt(n))
    {
        cout << n << endl ;
    }
    else
    {
        for (int i = 2 ; i <= sqrt(n) ; i++)
        {
            if (n % i == 0)
            {
                cout << i << endl ; 
                break ;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    cout << "1\n";
    for (int i = 2; i <= n; i++)
    {
        ntnn(i) ;
    }
    return 0;
}