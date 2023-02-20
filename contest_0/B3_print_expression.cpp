#include<iostream>

using namespace std ;

int main()
{
    int x , y , z , t ;
    cin >> x >> y >> z >> t ;
    cout << y << "," << z << "," << x << "," << t << endl ;
    long long tong = (long long)x+y+z+t ;
    cout << tong << endl ;
    long long a = 1ll*z*t ;
    long long a2 = x-y+a ;
    cout << a2 ;
    return 0 ;
}