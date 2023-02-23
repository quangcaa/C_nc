#include<iostream>

using namespace std ;

int main()
{
    long long n ; cin >> n ;
    int res = 0 ;
    while(n)
    {
        int x = n%10 ;
        if(x==2 || x==3 || x==5 || x==7)
        {
            res++ ;
        }
        n/=10 ;
    }
    cout << res ;
    return 0 ;
}