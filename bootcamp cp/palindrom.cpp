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


bool isPalindrom(string str)
{
    int b = str.size()-1;
    int a = 0;
    while (a < b)
    {
        if (str[a] != str[b])
        {
            return false;
        }
        a++;
        b--;
    }
    return true;
}

void solve()
{
    int ans = 0;
    TC
    {
        string in;
        cin >> in;
        ans += isPalindrom(in);
    }
    cout << ans;
}

int main() 
{
    fast;
    solve();

    return 0;
}