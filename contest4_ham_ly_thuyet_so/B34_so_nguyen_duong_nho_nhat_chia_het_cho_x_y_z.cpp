#include <iostream>

using namespace std ;

#define ll long long

ll ucln(ll a , ll b)
{
    if(b==0) return a;
    else
    {
        return ucln(b,a%b) ;
    }
}

ll bcnn(ll a , ll b)
{
    return a/ucln(a,b) * b ;
}

int main()
{
    ll x , y , z , n ; 
    cin >> x >> y >> z >> n ;

    ll min_val = bcnn(bcnn(x,y) , z) ;
    ll max_val = 1 ;
    for(int i=1 ; i<=n ; i++)
    {
        max_val *= 10 ;
    }

    ll thuong = (max_val/10 / min_val) + 1 ;
    ll res = -1 ;
    for(ll i=min_val*thuong ; i<max_val ; i+=min_val)
    {
        if(i%x==0 && i%y==0 && i%z==0)
        {
            res = i ;
            break ;
        }
    }
    
    cout << res ;
    return 0 ;      
}