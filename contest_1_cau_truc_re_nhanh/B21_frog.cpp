#include<iostream>

using namespace std ;

int main()
{
    int a , b , k ; cin >> a >> b >> k ;
    int x = 1 ;
    long long res=0 ;
    while(x<=k)
    {
        if(x%2==1)
        {
            res+=a ;
            x++ ;
        }
        else
        {
            res-=b ;
            x++ ;
        }
    }
    cout << res ;
    return 0 ;
}