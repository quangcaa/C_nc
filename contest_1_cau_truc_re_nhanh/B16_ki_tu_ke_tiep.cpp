#include<iostream>

using namespace std ;

int main()
{
    char c ; cin >> c ;
    if(c>='A' && c<'Z')
    {
        cout <<  (char)(c+33);
    }
    else if(c>='a' && c<'z')
    {
        cout << (char)(c+1) ;
    }
    else if(c=='Z' || c=='z')
    {
        cout << 'a' ;
    }
    return 0 ;
}