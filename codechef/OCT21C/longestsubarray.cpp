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
    cin.tie(NULL);

int main() 
{
    fast
    TC
    {
        ll n;
        cin >> n;
        ll sum = 1;
        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        while(sum*2 <= n)
        {
            sum *= 2;
        }
        ll b = n - sum + 1;
        if (n == sum)
            cout << sum / 2 << '\n';
        else
            cout << max(b, sum/2) << '\n';
    }

    return 0;
}