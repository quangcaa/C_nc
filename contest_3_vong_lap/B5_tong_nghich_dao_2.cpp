#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int n ; cin >> n ; 
    double res = 0 ;
    for(int i=1 ; i<=n ; i++)
    {
        res += 1.0/(i*2) ;
    }
    cout << fixed << setprecision(5) << res ;
    return 0 ;
}