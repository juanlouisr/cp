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

int dp[100] = {0};

int climbStairs(int n) {
    if (n == 2)
    {
        return 2;
    }
    if (n == 1)
    {
        return 1;
    }
    if (!dp[n]) {
        dp[n] = climbStairs(n-1) + climbStairs(n-2);
    }
    return dp[n];
}

int main() 
{
    fast;
    

    return 0;
}