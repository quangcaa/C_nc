#include <iostream>
#include <cmath>

using namespace std ;

int checktn(int n)
{
    int tmp = n ;
    int res = 0 ;
    while(n)
    {
        res = res*10 + n%10 ;
        n/=10 ;
    }
    return tmp == res ;
}

int checkuoc(int n)
{
    int cnt = 0 ;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            cnt++ ;
        }
    }
    if(cnt>=3)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}

int main()
{
    int a , b ; cin >> a >> b ;
    for(int i=a ; i<=b ; i++)
    {
        if(checkuoc(i) && checktn(i))
        {
            cout << i << " " ;
        }
    }
    return 0 ;
}