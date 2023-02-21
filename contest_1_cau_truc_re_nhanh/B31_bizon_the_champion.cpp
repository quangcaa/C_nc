#include<iostream>

using namespace std ;

int main()
{
    int a1 , a2 , a3 , b1 , b2 , b3 ;
    int n ;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n ;
    int cup = a1+a2+a3 ;
    int hc = b1+b2+b3 ;
    int res = 0 ;
    if(cup%5==0)
    {
        res += cup/5 ;
    }
    else
    {
        res += cup/5 + 1 ;
    }
    if(hc%10==0)
    {
        res += hc/10 ;
    }
    else
    {
        res += hc/10 + 1 ;
    }
    if(res>n)
    {
        cout << "NO" ;
    }
    else
    {
        cout << "YES" ;
    }
    return 0 ;
}