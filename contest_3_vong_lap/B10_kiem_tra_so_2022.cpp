#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int x ;
    bool check = false ;
    while(cin >> x)
    {
        if(x==2022)
        {
            check = true ;
        }
    }
    if(check)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    return 0 ;
}