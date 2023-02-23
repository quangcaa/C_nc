#include<iostream>

using namespace std;

int main()
{
    int n ; cin >> n ;
    long long res = 0 ;
    int i = 1 ;
    while(i<=n)
    {
        long long gt = 1 ;
        for(int j=1 ; j<=i ; j++)
        {
            gt*=j ;
        }
        res += gt ;
        i++ ;
    }
    cout << res ;
    return 0 ;
}