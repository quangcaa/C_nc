#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;

    //hinh1 
    int x = 1 ;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            cout << x << " " ;
            x++ ;
        }
        cout << endl ;
    }
    cout << endl ;

    //hinh2
    int y = 1 ;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            cout << y << " " ;
            y++ ;
        }
        y-=(n-1) ;
        cout << endl ;
    }
    cout << endl ;

    //hinh3
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=n-i ; j>=1 ; j--)
        {
            cout << "~" ;
        }
        for(int z=1 ; z<=i ; z++)
        {
            cout << i ;
        }
        cout << endl ;
    }
    cout << endl ;

    //hinh4
    for(int i=1 ; i<=n ; i++)
    {
        int ktao = i ;
        int kc = n-1 ;
        for(int j=1 ; j<=i ; j++)
        {
            cout << ktao << " " ;
            ktao += kc ;
            kc-- ;
        }
        cout << endl ;
    }

    return 0 ;
}