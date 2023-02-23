#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    long long res = 0 ;
    int x ;
    while(cin >> x)
    {
        if(x%2==0)
        {
            res += x ;
        }
    }
    cout << res ;
    return 0 ;
}