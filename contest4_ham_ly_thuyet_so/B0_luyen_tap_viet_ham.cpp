#include <cmath>
#include <iostream>

using namespace std;

int ham1(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

int ham2(int n)
{
    int sum = 0;
    while (n!=0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int ham3(int n)
{
    int sum = 0;
    while (n)
    {
        if (n % 10 % 2 == 0)
        {
            sum += n % 10;
        }
        n /= 10;
    }
    return sum;
}

int ham4(int n)
{
    int sum = 0;
    while (n)
    {
        int x = n % 10;
        if (x == 2 || x == 3 || x == 5 || x == 7)
        {
            sum += x;
        }
        n /= 10;
    }
    return sum;
}

int ham5(int n)
{
    int luu = 0;
    while (n)
    {
        luu = luu * 10 + n % 10;
        n /= 10;
    }
    return luu;
}

int ham6(int n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            while(n%i==0)
            {
                n/=i ;
            }
        }
    }
    if(n>1)
    {
        cnt++ ;
    }
    return cnt;
}

int ham7(int n)
{
    int ans;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans = i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
        ans = n;
    return ans;
}

int ham8(int n)
{
    while (n)
    {
        if (n % 10 == 6)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int ham9(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n%10 ;
        n /= 10;
    }
    return sum % 8 == 0;
}

long long ham10(int n)
{
    long long sum = 0;
    while (n)
    {
        int x = n % 10;
        int gt = 1;
        for (int i = 1; i <= x; i++)
        {
            gt *= i;
        }
        sum += gt;
        n /= 10;
    }
    return sum;
}

int ham11(int n)
{
    int check = n % 10;
    while (n)
    {
        if (n % 10 != check)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int ham12(int n)
{
    int last = n % 10;
    while (n)
    {
        if (n % 10 > last)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int ham13(int n)
{
    int mu = 0;
    int tmp = n;
    while (tmp)
    {
        mu++;
        tmp /= 10;
    }
    long long sum = 0;
    while (n)
    {
        sum += pow(n % 10, mu);
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
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
    return 0;
}