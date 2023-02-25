#include<iostream>
#include<algorithm>

using namespace std ;

int main()
{
    long long n ; cin >> n ;
    int max_val = -1e9 , min_val = 1e9 ;
    if(n==0)
    {
        cout << "0 0" ;
        return 0 ;
    }
    while(n)
    {
        int x = n%10 ;
        max_val = max(x,max_val) ;
        min_val = min(x,min_val) ;
        n/=10 ;
    }
    cout << max_val << " " << min_val ;
    return 0 ;
}