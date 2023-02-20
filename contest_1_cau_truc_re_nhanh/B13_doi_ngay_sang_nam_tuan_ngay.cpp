#include<iostream>

using namespace std ;

int main()
{
    int x ; cin >> x ;
    int nam = x/365 ; x%=365 ;
    int tuan = x/7 ; x%=7 ;
    int ngay = x ;
    cout << nam << " " << tuan << " " << ngay ;
    return 0 ;
}