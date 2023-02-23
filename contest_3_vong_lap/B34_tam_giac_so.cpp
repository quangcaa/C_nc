#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n-i ; j++)
        {
            cout << "  " ;
        }
        for(int z=i ; z<i+i ; z++)
        {
            cout << z << " " ;
        }
        for(int q=i+i-2 ; q>=i ; q--)
        {
            cout << q << " " ;
        }

        cout << endl ;
    }
    return 0 ;
}