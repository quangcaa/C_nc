#include<iostream>

using namespace std ;

int main()
{
    char x ; cin >> x ;
    if(x>='a' && x<='z')
    {
        cout << "LOWER" ;
    }
    else if(x>='A' && x<='Z')
    {
        cout << "UPPER" ;
    }
    else if(x>='0' && x<='9')
    {
        cout << "DIGIT" ;
    }
    else
    {
        cout << "SPECIAL" ;
    }
    return 0 ;
}