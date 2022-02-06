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

ll favSum()
{
    ll n,x,temp,sum;
    cin >> n >> x;
    sum = 0;
    forto(i,n)
    {
        cin >> temp;
        if (temp <= x)
        {
            sum -= 2*temp;
        }
    }
    sum += x*(1+x)/2;

    return sum;
}

void solve()
{
    TC
    {
        cout << favSum() << "\n";
    }
}

int main() 
{
    fast;
    solve();

    return 0;
}