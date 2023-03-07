#include <iostream>

using namespace std ;

void inF(int n)
{
    long long f1 = 1 , f2 = 1 ;
    cout << f1 << endl << f2 << endl ;
    for(int i=2 ; i<n ; i++)
    {
        long long fn = f1 + f2 ;
        f2 = f1 ;
        f1 = fn ;
        cout << fn << endl ;
    }
}

int main()
{
    int n ; cin >> n ;
    if(n==1)
    {
        cout << 1 ;
        return 0 ;
    }
    inF(n) ;
    return 0 ;
}