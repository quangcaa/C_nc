#include<iostream>

using namespace std ;

int main()
{
    int a , b , n ;
    cin >> a >> b >> n ;
    for(int x=1 ; x<=1000 ; x++)
    {
        double y = 1.0*(n-a*x)/b ;
        if(y>=0 && y==(int)y)
        {
            cout << "YES" ;
            return 0 ;
        }
    }
    cout << "NO" ;
    return 0 ;
}