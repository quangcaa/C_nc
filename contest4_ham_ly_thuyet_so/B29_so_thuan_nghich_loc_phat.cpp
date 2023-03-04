#include <iostream>

using namespace std ;

int dk1(int n )
{
    int tmp = n ;
    int res = 0 ;
    while(n)
    {
        res = res*10 + n%10 ;
        n/=10 ;
    }
    return (res == tmp) ;
}

int dk2(int n)
{
    while(n)
    {
        if(n%10 == 6)
        {
            return 1 ;
        }
        n/=10 ;
    }
    return 0 ;
}

int dk3(int n)
{
    int sum = 0 ;
    while(n)
    {
        sum += n%10 ;
        n/=10 ;
    }
    return (sum%10 == 8) ;
}

int main()
{
    int a , b ; cin >> a >> b ;
    for(int i=a ; i<=b ; i++)
    {
        if(dk1(i) && dk2(i) && dk3(i))
        {
            cout << i << " " ;
        }
    }
    return 0 ;
}