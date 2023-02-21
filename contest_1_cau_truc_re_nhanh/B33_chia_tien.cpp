#include<iostream>
#include<algorithm>

using namespace std ;

int main()
{
    int a , b , c , n ;
    cin >> a >> b >> c >> n ;
    if(a==b && b==c)
    {
        if(n%3==0)
        {
            cout << "YES" ;
        }
        else
        {
            cout << "NO" ;
        }
    }
    else
    {
        int x = max({a,b,c}) ;
        n -= (x-a) + (x-b) + (x-c) ;
        if(n>=0 && n%3==0)
        {
            cout << "YES" ;
        }
        else
        {
            cout << "NO" ;
        }
    }
    return 0 ;
}