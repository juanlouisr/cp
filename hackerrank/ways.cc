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

int MOD = 1000000007;


int ways(int total, int k)
{
    vector<int> dp(total+1, 0);
    dp[0] = 1;
    for (int i = 1; i <= k; ++i)
    {
        for (int j = 1; j <= total; ++j)
        {
            if (j >= i) 
            {
                dp[j] = (dp[j] + dp[j-i]) % MOD;
            }
        }
    }
    return dp[total];
}

int main() 
{
    fast;
    

    return 0;
}