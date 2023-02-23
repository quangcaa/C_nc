#include<iostream>

using namespace std ;

int main()
{
   int n ; cin >> n ;
   for(int i=1 ; i<=n ; i++)
   {
        char chan = 'a' , le = 'A' ;
        int cong = i-1 ;
        le += cong ;
        chan += cong ;
        for(int j=1 ; j<=n ; j++)
        {
            if(i%2!=0)
            {
                cout << le ;
                le++ ;
            }
            else
            {
                cout << chan ;
                chan++ ;
            }
        }
        cout << endl ;
   } 
}