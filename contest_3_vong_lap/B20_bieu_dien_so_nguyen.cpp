#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    if(n<2)
    {
        cout << -1 ; 
        return 0 ;
    }
    if(n%2==0)
    {
        int x = n/2 ;
        cout << x << endl ;
        for(int i=1 ; i<=x ; i++)
        {
            cout << "2 " ;
        }
    }
    else
    {
        int x = (n-1)/2 ;
        cout << x << endl ;
        for(int i=1 ; i<x ; i++)
        {
            cout << "2 " ;
        }
        cout << "3" ;
    }
    return 0 ;
}