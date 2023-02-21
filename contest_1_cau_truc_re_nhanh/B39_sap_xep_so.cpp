#include<iostream>
#include<algorithm>

using namespace std ;

int main()
{
    int a , b , c ; 
    cin >> a >> b >> c ;
    int res1 = min({a,b,c}) ;
    int res2 = max({a,b,c}) ;
    int res3 = a+b+c - (res1+res2) ;
    cout << res1 << " " << res3 << " " << res2 ;
    return 0 ;
}