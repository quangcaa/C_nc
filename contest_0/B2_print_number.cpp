#include<iostream>
#include<iomanip>

using namespace std; 

int main()
{
    int x ; 
    long long y ;
    char z ;
    float j ;
    double d ;
    cin >> x >> y >> z >> j >> d ;
    cout << x << endl << y << endl << z << endl << fixed << setprecision(2) << j << endl << setprecision(9) << d ;
    return 0 ;
}