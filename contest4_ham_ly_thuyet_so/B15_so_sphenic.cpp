#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    long long n ; cin >> n ;
    int cnt = 0 ;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            cnt++ ;
            int check = 0 ;
            while(n%i==0)
            {
                n/=i ;
                ++check ;
                if(check==2)
                {
                    cout << '0' ;
                    return 0 ;
                }
            }
        }
    }
    if(n>1)
    {
        cnt++ ;
    }

    if(cnt==3)
    {
        cout << 1 ;
    }
    else
    {
        cout << 0 ;
    }
    return 0 ;
}