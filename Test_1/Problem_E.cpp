#include<iostream>
#include<algorithm>
#include<iomanip> 
#include<cmath>

using namespace std ;

int main()
{
    int a , b , c ; cin >> a >> b >> c ;
    long long delta = b*b - 4*a*c ;
    if(a==0 && b==0 && c==0)
    {
        cout << "VO SO NGHIEM" ;
        return 0 ;
    }
    else if(a==0 && b==0)
    {
        cout << "VO NGHIEM" ;
        return 0 ;
    }
    if(a==0)
    {
        double x = 1.0*-c/b ;
        cout << fixed << setprecision(2) << x ;
    }
    else if(delta<0)
    {
        cout << "VO NGHIEM" ;
    }
    else if(delta==0)
    {
        double x = 1.0*-b/2*a ;
        cout << fixed << setprecision(2) << x ;
    }
    else if(delta>0)
    {
        double x1 = (-b + sqrt(delta))/(2.0*a) ;
        double x2 = (-b - sqrt(delta))/(2.0*a) ;
        double min_val = min(x1,x2) ;
        double max_val = max(x1,x2) ;
        cout << fixed << setprecision(2) << min_val << " " ;
        cout << fixed << setprecision(2) << max_val ;
    }
    return 0 ;
}