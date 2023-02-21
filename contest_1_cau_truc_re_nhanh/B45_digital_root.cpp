#include<iostream>

using namespace std ;

int main()
{
    long long n ; cin >> n ;
    while(n>=10)
    {
        int res = 0 ;
        while(n)
        {
            res += n%10 ;
            n/=10 ;
        }
        n = res ;
    } 
    cout << n ;
    return 0 ;
}