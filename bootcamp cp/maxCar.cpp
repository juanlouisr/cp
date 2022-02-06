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


void solve()
{
    ll temp,n,sum = 0;
    cin >> n;
    forto(i,n)
    {
        cin >> temp;
        sum += temp;
    }
    double ans = (double) sum / 5;
    cout << (ll) ceil(ans);
}

int main() 
{
    fast;
    solve();

    return 0;
}