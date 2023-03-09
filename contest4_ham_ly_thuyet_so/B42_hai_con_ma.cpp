#include <cmath>
#include <iostream>

using namespace std ;

int main()
{
    int n;
    cin >> n ;
    cout << 0 << endl ; 
    long long cnt = 0 ;
    for(int z=2 ; z<=n ; z++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int q = i + 1; q < n; q++)
                {
                    for (int k = 0; k < n; k++)
                    {
                        if ((abs(i - q) == 2 && abs(j - k) == 1) || (abs(i - q) == 1 && abs(j - k) == 2))
                        {
                            continue;
                        }
                        cnt++;
                    }
                }
            }
        }
        cout << cnt/2 << endl ;
    }
    return 0 ;
}