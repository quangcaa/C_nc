#include<iostream>

using namespace std ;

int main()
{
    int month , year ; 
    cin >> month >> year ;
    if(month<1 || month>12 || year<1)
    {
        cout << "INVALID" ;
        return 0 ;
    }
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        cout << "31" ;
    }
    else if(month==2)
    {
        if(year%400==0 || (year%4==0 && year%100!=0))
        {
            cout << "29" ;
        }
        else
        {
            cout << "28" ;
        }
    }
    else
    {
        cout << "30" ;
    }
    return 0 ;
}