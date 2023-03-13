#include <iostream>
#include <cmath>

using namespace std ;

#define ll long long 

int nt(int n)
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

int tn(int n)
{
    int sum = 0 ;
    int tmp = n ;
    int rev = 0 ;
    while(tmp)
    {
        sum += tmp%10 ;

        rev = rev*10 + tmp%10 ;
        tmp /=10 ;
    }
    if(rev != n)
    {
        return 0 ;
    }
    return nt(sum) ;
}

int main()
{
    int a , b ; cin >> a >> b ;
    
    int cnt = 0 ;
    for(int i=a ; i<=b ; i++)
    {
        if(tn(i))
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