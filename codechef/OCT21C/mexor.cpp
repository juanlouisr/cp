#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define sc ;
#define TC ll tc sc cin >> tc sc while(tc--)
#define forto(var,up) for(ll(var)=0;(var)<(up);(var)++)
#define all(arr) (arr).begin(), (arr).end()
// #define fast\
//     ios::sync_with_stdio(false); \
//     cin.tie(NULL);

int main() 
{
    // fast
    TC
    {
        ll n;
        cin >> n;
        ll mn = 1;
        ll count = 0;
        while (mn << 1 <= n)
        {
            mn <<= 1;
            count++;
        }
        cout << mn << endl;
        
    }

    return 0;
}