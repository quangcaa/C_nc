#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        if(i==n)
        {
            break ;
        }
        for(int j=1 ; j<=n-i ; j++)
        {
            cout << "  " ;
        }
        for(int q=1 ; q<=i*2-1 ; q++)
        {
            cout << "* " ;
        }
        for(int k=1 ; k<=n-i ; k++)
        {
            cout << "  " ;
        }
        cout << endl ;
    }
    for(int i=n ; i>=1  ; i--)
    {
        for(int j=1 ; j<=n-i ; j++)
        {
            cout << "  " ;
        }
        for(int q=1 ; q<=i*2-1 ; q++)
        {
            cout << "* " ;
        }
        for(int k=i ; k<=n-i ; k++)
        {
            cout << "  " ;
        }
        cout << endl ;
    }
    return 0 ;
}