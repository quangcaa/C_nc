#include<iostream>
#include<cmath>

using namespace std ;

int nt1(int n)
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

int nt2(int n)
{
    while(n)
    {
        int x = n%10 ;
        if(x != 2 && x!=3 && x!=5 && x!=7)
        {
            return 0 ;
        }
        n/=10 ;
    }
    return 1 ;
}

int nt3(int n)
{
    int sum = 0 ;
    while(n)
    {
        sum += n%10 ;
        n/=10 ;
    }
    if(nt1(sum))
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
    int a , b  ; cin >> a >> b ;
    int cnt = 0 ;
    for(int i=a ; i<=b ; i++)
    {
        if(nt2(i))
        {
            if(nt3(i) && nt1(i))
            {
                cnt++ ;
            }
        }
    }
    cout << cnt ;
    return 0 ;
}