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

pair<ll, ll> fibonacci(ll n) {
	if(!n) return {0LL, 1LL};
	pair<ll, ll> p = fibonacci(n / 2);
	ll c = (p.first * (2 * p.second - p.first)) % mod;
	ll d = ((p.first * p.first) % mod + (p.second * p.second) % mod) % mod;
	if(c < 0) {
		c += mod;
	}
	if(n & 1) {
		return {d, (c + d) % mod};
	}
	return {c, d};
}

void solve()
{
    ll n;
    cin >> n;
    cout << fibonacci(n).first;
}

int main() 
{
    fast;
    solve();

    return 0;
}