#include<iostream>

using namespace std ;

int main()
{
    int h , m , k ; 
    cin >> h >> m >> k ;
    long long sum = h*28 + m + k ; 
    int resh = (sum/28)%28 ; sum%=28 ;
    int resm = sum ;
    if(resh<10)
    {
        cout << "0" << resh << "h:" ;
    }
    else
    {
        cout << resh << "h:" ;
    }
    if(resm<10)
    {
        cout << "0" << resm << "m" ;
    }
    else
    {
        cout << resm << "m" ;
    }
    return 0 ;
}