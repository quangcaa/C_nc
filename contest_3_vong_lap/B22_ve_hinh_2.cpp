#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    
    //hinh1 
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
    cout << endl ;

    //hinh2 
    for(int i=0 ; i<n ; i++)
    {
        for(int j=n-i ; j>=1 ; j--)
        {
            cout << "*" ;
        }
       cout << endl ; 
    }
    cout << endl ;

    //hinh3
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=n-i ; j>=1 ; j--)
        {
            cout << " " ;
        }
        for(int z=1 ; z<=i ; z++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
    cout << endl ;

    //hinh4
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i ; ++j)
        {
            cout << " " ;
        }
        for(int z=n-i ; z>=1 ; z--)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
    cout << endl ;

    //hinh5
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            if(i==1 || i==n || j==1 || j==i)
            {
                cout << "*" ;
            }
            else
            {
                cout << " " ;
            }
        }
        cout << endl ;
    }

    return 0 ;
}