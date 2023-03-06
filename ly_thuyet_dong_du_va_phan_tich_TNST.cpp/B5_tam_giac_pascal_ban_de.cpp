#include <iostream>

using namespace std ;

long long pascal(int n, int k)
{
    long long res = 1 ;
    for(int i=0 ; i<k ; i++)
    {
        res *= (n-i) ;
        res /= (i+1) ;
    }
    return res ;
}

int main()
{
    int n ; cin >> n ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<=i ; j++)
        {
            cout << pascal(i, j) << " " ;
        }
        cout << endl ;
    }
    return 0 ;
}