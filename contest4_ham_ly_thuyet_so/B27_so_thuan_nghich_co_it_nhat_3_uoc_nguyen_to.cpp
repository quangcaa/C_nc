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
            while(n%i==0)
            {
                n/=i ;
            }
        }
    }
    if(n > 1)
    {
        cnt++ ;
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
    int check = 0 ;
    for(int i=a ; i<=b ; i++)
    {
        if(checktn(i) && checkuoc(i))
        {
            check++ ;
            cout << i << " " ;
        }
    }
    if(!check)
    {
        cout << "-1" ;
    }
    return 0 ;
}