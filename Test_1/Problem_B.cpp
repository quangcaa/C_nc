#include<iostream>

using namespace std ;

int main()
{
    long long n ; cin >> n ;
    char kitu ;
    int cnt = 0 ;
    while(cin >> kitu)
    {
        if(kitu == 'a' || kitu =='i' || kitu=='o' || kitu=='e' || kitu =='u' || kitu == 'A' || kitu =='I' || kitu=='O' || kitu=='E' || kitu =='U')
        {
            cnt ++ ;
        }
    }
    if(cnt==0)
    {
        cout << "NONE" ;
    }
    else
    {
        cout << cnt ;
    }
    return 0 ;
}