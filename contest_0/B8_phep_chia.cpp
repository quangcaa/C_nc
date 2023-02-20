#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int a , b ; cin >> a >> b ;
    double kq1 = b/a ;
    double kq2 = (float)b/a ;
    cout << kq1 << endl << fixed << setprecision(2) << kq2 ;
    return 0 ;
}