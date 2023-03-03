#include <iostream>
#include <cmath>

using namespace std ;

int ham1(int n)
{
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            return 0 ;
        }
    }
    return n > 1 ;
}

int ham2(int n)
{
    int sum = 0 ;
    while(n)
    {
        sum += n%10 ;
        n/=10 ;
    }
    return sum ; 
}

int ham3(int n)
{
    int sum = 0 ;
    while(n)
    {
        if(n%10 %2==0)
        {
            sum += n%10 ;
        }
        n/=10 ;
    }
    return sum ;     
}

int ham4(int n)
{
    int sum = 0 ;
    while(n)
    {
        int x = n%10 ;
        if(x==2 || x==3 || x==5 || x==7)
        {
            sum += x;
        }
    }
    return sum ;
}

int ham5(int n)
{
    int luu = 0 ;
    while(n)
    {
        luu = luu*10 + n%10 ;
        n/=10 ;
    }
    return luu ;
}

int ham6(int n)
{
    int cnt = 0 ;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            cnt++ ;
            if(i != n%i)
            {
                cnt++ ;
            }
        }
    }
    return cnt ;
}

int main(){
    int n; cin >> n;
    cout << ham1(n) << endl;
    cout << ham2(n) << endl;
    cout << ham3(n) << endl;
    cout << ham4(n) << endl;
    cout << ham5(n) << endl;
    cout << ham6(n) << endl;
    cout << ham7(n) << endl;
    cout << ham8(n) << endl;
    cout << ham9(n) << endl;
    cout << ham10(n) << endl;
    cout << ham11(n) << endl;
    cout << ham12(n) << endl;
    cout << ham13(n) << endl;
    return 0 ;
}