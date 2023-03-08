#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    int n , k ; cin >> n >> k ;
    int cnt = 0 ;
    int res = 0 ;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cnt ++ ;
                n/=i ;
                if(cnt == k)
                {
                    res = i ;
                    cout << res ;
                    return 0 ;
                }
            }
        }
    }
    if(n>1)
    {
        cnt++ ;
        if(cnt == k)
        {
            res = n ;
            cout << res ;
            return 0 ;
        }
    }
    cout << "-1" ;
    return 0 ;
}