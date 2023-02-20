#include<iostream>

using namespace std ;

int main()
{
    int n , m ; cin >> n >> m ;
    int min ;
    if(n<m)
    {
        cout << "-1" ;
        return 0;
    }
    if(n%2==0)
    {
        min = n/2 ;
    }
    else
    {
        min = n/2 + 1 ;
    }
    long long res = 1ll * ((min + (m-1))/m) * m ;
    cout << res ;
    return 0 ;
}