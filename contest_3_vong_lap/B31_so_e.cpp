#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    double res = 1 ; 
    int i=1 ;
    while(i<=n)
    {
        long long gt = 1 ;
        for(int j=1 ; j<=i ; j++)
        {
            gt *= j ;
        }
        res += 1.0/gt ;
        i++ ;
    }
    cout << fixed << setprecision(2) << res ;
    return 0 ;
}