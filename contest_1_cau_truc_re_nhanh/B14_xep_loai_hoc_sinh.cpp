#include<iostream>

using namespace std ;

int main()
{
    double h11 , h12 , h2 , h3 ;
    cin >> h11 >> h12 >> h2 >> h3 ;
    double gpa = (h11+h12+h2*2+h3*3)/7.0 ;
    if(gpa >= 8)
    {
        cout << "GIOI" ;
    }
    else if(gpa>=6.5 && gpa<8)
    {
        cout << "KHA" ;
    }
    else if(gpa>=5 && gpa<6.5)
    {
        cout << "TRUNG BINH" ;
    }
    else if(gpa<5)
    {
        cout << "YEU" ;
    }
    return 0 ;
}