#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std ;

double a[1000] ;

int main(){
    int n ; cin >> n ;
    double a[n] , b[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i] ;
    }
    for(int i=0 ; i<n ; i++)
    {
        cin >> b[i] ;
    }   
    double res = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        res += 1.0*a[i] * b[i] ;
    }
    cout << fixed << setprecision(2) << res ;

    return 0;
}