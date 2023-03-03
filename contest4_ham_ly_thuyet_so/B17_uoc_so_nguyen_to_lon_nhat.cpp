#include <cmath>
#include <iostream>

using namespace std;

int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (nt(x))
        {
            cout << x << endl;
        }
        else
        {
            int y ;
            for(int i=2 ; i<=sqrt(x) ; i++)
            {
                if(x%i==0)
                {
                    while(x%i==0)
                    {
                        x/=i ;
                        y = i ;
                    }
                }
            }
            if(x > 1)
            {
                y = x ;
            }
            cout << y << endl ;
        }
    }
    return 0 ;
}