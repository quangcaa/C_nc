#include<iostream>

using namespace std ;

int main()
{
    double w , h ; 
    cin >> w >> h ;
    double res = 1.0 * w / ((h/100)*(h/100)) ;
    if(res<18.5)
    {
        cout << "Under weight" ;
    }
    else if(res<25)
    {
        cout << "Normal" ;
    }
    else if(res<30)
    {
        cout << "Over weight" ;
    }
    else if(res<35)
    {
        cout << "Obesity 1" ;
    }
    else if(res<40)
    {
        cout << "Obesity 2" ;
    }
    else if(res>=40)
    {
        cout << "Extreme obesity" ;
    }
    return 0 ;
}