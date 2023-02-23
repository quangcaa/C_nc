#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    for(int i=1 ; i<=n  ; i++)
    {
        for(int j=i ; j<=n-1 ; j++)
        {
            cout << "  " ;
        }
        for(int q=1 ; q<=i*2-1 ; q++)
        {
            cout << "* " ;
        }
        for(int k=i ; k<=n-1 ; k++)
        {
            cout << "  " ;
        }
        cout << endl ;
    }
    return 0 ;
}