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
    ll n, temp;
    cin >> n;
    stack<pair<ll,ll>> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        while (!s.empty() && s.top().first >= temp)
            s.pop();
        if (s.empty())
            cout << "0 ";
        else
            cout << s.top().second << " ";
        s.push({temp,i});
    }
}

int main() 
{
    fast;
    solve();

    return 0;
}