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
    TC
    {
        int n,k,max = INT_MIN, min = INT_MAX,temp;
        
        cin >> n >> k;
        forto(i, n)
        {
            cin >> temp;
            if (temp > max)
            {
                max = temp;
            }
            if (temp < min)
            {
                min = temp;
            }
        }
        cout << max - min << "\n";
    }
}


int main() 
{
    fast;
    solve();

    return 0;
}