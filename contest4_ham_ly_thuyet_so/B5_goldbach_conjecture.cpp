#include <iostream>
#include <cmath>

using namespace std ;

int nt(int n)
{
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            return 0 ;
        }
    }
    return n > 1 ;
}

int main()
{
    int n ; cin >> n ;
    while(n--)
    {
        int x ; cin >> x ;
        for(int i=2 ; i<=x/2 ; i++)
        {
            if(nt(i))
            {
                int cl = x-i ;
                if(nt(cl))
                {
                    cout << i << " " << cl << endl ;
                }
            }
        }
    }
    return 0 ;
}