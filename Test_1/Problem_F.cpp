#include<iostream>
#include<algorithm>
#include<iomanip> 
#include<cmath>

using namespace std ;

string Can[10] = {"CANH" , "TAN" , "NHAM" , "QUY" , "GIAP" , "AT" , "BINH" , "DINH" , "MAU" , "KY"} ;
string Chi[12] = {"TY" , "SUU" , "DAN" , "MAO" , "THIN" , "TI" , "NGO" , "MUI" , "THAN" , "DAU" , "TUAT" , "HOI"} ;

int main()
{
    int n ; cin >> n ;
    int can = n%10 ;
    for(int i=0 ; i<10 ; i++)
    {
        if(can==i)
        {
            cout << Can[i] << " " ;
        }
    }
    int chi = (n-(1980-8))%12 ;
    for(int i=0 ; i<12 ; i++)
    {
        if(chi==i)
        {
            cout << Chi[i] ;
        }
    }
    return 0 ;
}