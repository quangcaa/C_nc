#include<iostream>

using namespace std ;

int main()
{
    int n ; cin >> n ; 
    for(int i=1 ; i<=n ; i++)
    {
        cout << i << ' ' ;
    }
    cout << endl ;
    for(int i=n ; i>=0 ; i--)
    {
        cout << i << ' ' ;
    }
    cout << endl ;
    for(int i=0 ; i<=n ; i++)
    {
        if(i%2==0)
        {
            cout << i << ' ' ;
        }
    }
    cout << endl ;
    for(int i=0 ; i<=n ; i++)
    {
        if(i%2!=0)
        {
            cout << i << ' ' ;
        }
    }
    cout << endl ;
    for(int i=0 ; i<n ; i++)
    {
        if(i%4==0)
        {
            cout << i << ' ' ;
        }
    }
    cout << endl ;
    char op = 'a' ;
    for(int i=1 ; i<=n ; i++)
    {
        cout << op << ' ' ;
        op++ ;
    }
    cout << endl ;
    for(int i=122-n+1 ; i<=122 ; i++)
    {
        char op = char(i) ;
        cout << op << ' ' ;
        op++ ;
    }
}