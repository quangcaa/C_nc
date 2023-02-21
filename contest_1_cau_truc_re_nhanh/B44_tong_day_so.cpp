#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    long long res1 = 0 , res2 = 0 , res3 = 0 , res4 = 0 ;
    for(int i=1 ; i<=n ; i++)
    {
        res1 += i ;
    }
    for(int i=1 ; i<=n ; i++)
    {
        res2 += 1ll*i*i ;
    }
    for(int i=1 ; i<=n ; i++)
    {
        if(i%3==0)
        {
            res3++ ;
        }
    }
    for(int i=0 ; i<=n ; i+=3)
    {
        res4 += i ;
    }
    cout << res1 << endl << res2 << endl << res3 << endl << res4 ;
    return 0 ;
}