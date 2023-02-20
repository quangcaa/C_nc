#include<iostream>

using namespace std ;

int main()
{
    int a , b ; cin >> a >> b ;
    int so1 = a/b * b ;
    int so2 = (a+b-1)/b * b ; 
    cout << so1 << endl << so2 ;
    return 0 ;
}