#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    char kitu ; 
    int sum = 0 ;
    int cnt = 0 ;
    while(cin >> kitu)
    {
        if((kitu>='a' && kitu<='z') || (kitu>='A' && kitu<='Z'))
        {
            cnt++ ;
        }
        if(kitu>='0' && kitu<='9')
        {
            sum += kitu - '0' ;
        }
    }
    cout << cnt << endl << sum ; 
    return 0 ;
}