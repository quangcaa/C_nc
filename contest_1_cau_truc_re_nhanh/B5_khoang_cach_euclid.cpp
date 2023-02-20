#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>

using namespace std ;

int main()
{
    int x1 , y1 , x2 , y2 ;
    cin >> x1 >> y1 >> x2 >> y2 ;
    double res = sqrt(pow(x2-x1,2) + pow(y2-y1,2)) ;
    cout << fixed << setprecision(2) << res ;
    return 0 ;
}