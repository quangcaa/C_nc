#include <iostream>
#include <cmath>

using namespace std ;

int lat(int n )
{
    if(n<10)
    {
        return n ;
    }
    int cuoi = n%10 ;
    int max_val = 0 ;
    while(n)
    {
        max_val = max(max_val , n%10) ;
        n/=10 ;
    }
    return max_val == cuoi ;
}

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
    int cnt = 0 ;
    for(int i=2 ; i<=n ; i++)
    {
        if(lat(i) && nt(i))
        {
            cnt++ ;
            cout << i << " " ;
        }
    }
    cout << endl << cnt ;
    return 0 ;
}