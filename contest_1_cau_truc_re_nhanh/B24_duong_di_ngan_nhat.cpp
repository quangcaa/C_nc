#include<iostream>
#include<algorithm>

using namespace std ;

int main()
{
    int d1 , d2 , d3 ; 
    cin >> d1 >> d2 >> d3 ;
    long long kc1 = d1+d2+d3 , kc2 = 2*(d1+d2) , kc3 = (d2+d3)*2 , kc4 = (d1+d3)*2 ;
    long long res = min({kc1,kc2,kc3,kc4}) ;
    cout << res ;
    return 0 ;
}