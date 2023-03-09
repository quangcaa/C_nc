#include <iostream>

using namespace std ;

long long ucln(long long a , long long b)
{
    if(b==0)
    {
        return a ;
    }
    else
    {
        return ucln(b , a%b) ;
    }
}

long long bcnn(long long a , long long b)
{
    return a/ucln(a,b) * b ;
}

int main()
{
    long long a , b ; cin >> a >> b ;
    if(a==0 && b==0)
    {
        cout << "0 0" ;
        return 0 ;
    }
    cout << ucln(a,b) << " " << bcnn(a,b) ;
    return 0;
}