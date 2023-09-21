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

int longestCommonSubsequence(string text1, string text2) {
    vector<vector<int>> dp = { text1.size()+1, vector<int>(text2.size()+1, 0) };
    for (size_t i = text1.size(); i >= 0; i--)
    {
        for (size_t j = text2.size(); j >= 0; j--)
        {
            if (text1[i] == text2[j])
            {
                dp[i][j] = 1 + dp[i+1][j+1];
            }
            else
            {
                dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }
    return dp[0][0];
}

int main() 
{
    fast;
    

    return 0;
}