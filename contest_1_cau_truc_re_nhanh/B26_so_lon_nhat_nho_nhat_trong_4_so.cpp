#include<iostream>
#include<algorithm>

using namespace std ;

int main()
{
    long long a , b , c , d ; 
    cin >> a >> b >> c >> d ;
    long long maxx = max({a,b,c,d}) ;
    long long minn = min({a,b,c,d}) ;
    cout << maxx << " " << minn ;
    return 0 ;
}