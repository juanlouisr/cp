#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define sc ;
#define TC ll tc sc cin >> tc sc while(tc--)
#define forto(var,up) for(ll(var)=0;(var)<(up);(var)++)
#define all(arr) (arr).begin(), (arr).end()
#define fast\
    ios::sync_with_stdio(false); \
    cin.tie(NULL)


bool isPrime(ll n)
{
    int cnt = 0;
    for (ll i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (i != n/i)
                cnt++;
            if (cnt > 2)
                return false;
        }
            
    }
    return true;
}

void solve()
{
    ll in,b;
    cin >> in;
    if (in <= 3)
    {
        cout << -1;
    }
    else
    {
        b = in - 2;
        if (isPrime(b)) 
        {
            cout << "2 " << b;
        }
        else
            cout << -1;
    }
}

int main() 
{
    fast;
    solve();

    return 0;
}