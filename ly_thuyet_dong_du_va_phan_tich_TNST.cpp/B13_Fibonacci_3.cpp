#include <iostream>

using namespace std;

void findF(long long n)
{
    if(n==0 || n==1)
    {
        cout << 1 ;
        return ;
    }
    long long f1 = 1, f2 = 1;
    for (int i = 2; i <= 92; i++)
    {
        long long fn = f1 + f2;
        if (fn >=n)
        {
            cout << fn ;
            return ;
        }
        f2 = f1;
        f1 = fn;
    }
    return ;
}

int main()
{
    long long n;
    cin >> n;
    findF(n) ;
    return 0;
}