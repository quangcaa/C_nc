#include <iostream>
#include <cmath>

using namespace std ;

#define ll long long 

int check(int n)
{
    if(n<10)
    {
        return 1 ;
    }

    int last = n%10 ; n/=10 ;
    while(n)
    {
        if(abs(last - n%10) != 1)
        {
            return 0 ;
        }
        last = n%10 ;
        n/=10 ;
    }
    return 1 ;
}

int main()
{
    int a , b ; cin >> a >> b ;
    
    int cnt = 0 ;
    for(int i=a ; i<=b ; i++)
    {
        if(check(i))
        {
            cnt++ ;
            cout << i << " " ;
        }
    }

    if(cnt == 0)
    {
        cout << "NONE" ;
    }
    
    return 0 ;
}