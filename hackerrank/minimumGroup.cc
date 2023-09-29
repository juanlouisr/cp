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

int heightHelper(int n, vector<int>& predators, unordered_map<int, int>& dp)
{
    if (predators[n] == -1)
    {
        dp[n] = 1;
        return 1;
    }
    if (dp.find(n) != dp.end())
    {
        return dp[n];
    }
    dp[n] = 1 + heightHelper(predators[n], predators, dp);
    return dp[n];
}

int minimumGroups(vector<int> predators) {
    int maxHeight = 1, height;
    unordered_map<int, int> dp;

    for (size_t i = 0; i < predators.size(); i++)
    {
        height = heightHelper(i, predators, dp);
        maxHeight = max(maxHeight, height);
    }
    return maxHeight;
}






int main() 
{
    fast;
    cout << minimumGroups({-1, 8, 6, 0, 7, 3, 8, 9, -1, 6}) << endl;
    cout << minimumGroups({-1, 0, 1});

    return 0;
}