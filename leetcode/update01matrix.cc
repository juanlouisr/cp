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

// Only for pairs of std::hash-able types for simplicity.
// You can of course template this struct to allow other hash functions
struct pair_hash {
    template <class T1, class T2>
    size_t operator () (const std::pair<T1,T2> &p) const {
        return std::hash<int>{}(p.first) ^ std::hash<int>{}(p.second);
    }
};

vector<pair<int,int>> directions = {{0,1}, {1,0}, {0,-1}, {-1, 0}};

int nearestZero(vector<vector<int>>& mat, int i, int j, unordered_set<pair<int,int>, pair_hash> visited, vector<vector<int>>& dp) {
    if (i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size()) {
        return -1;
    }
    if (mat[i][j] == 0) {
        dp[i][j] = 0;
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (visited.find({i, j}) != visited.end()) {
        return -1;
    }
    vector<int> dirs;
    visited.insert({i,j});
    for (auto dir : directions)
    {
        int nearest = nearestZero(mat, i+dir.first, j+dir.second, visited, dp);
        if (nearest != -1) {
            dirs.push_back(nearest);
        }
    }
    if (dirs.empty()) {
        return -1;
    }
    
    dp[i][j] = 1 + *min_element(begin(dirs), end(dirs));
    return dp[i][j];
}

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    vector<vector<int>> distances;
    vector<vector<int>> dp(mat.size(), vector<int>(mat[0].size(), -1));

    for (size_t i = 0; i < mat.size(); i++)
    {
        vector<int> dist;
        for (size_t j = 0; j < mat[i].size(); j++)
        {
            unordered_set<pair<int, int>, pair_hash> visited;
            dist.push_back(nearestZero(mat, i, j, visited, dp));
        }
        distances.push_back(dist);
    }
    return distances;
}



int main() 
{
    fast;
    vector<vector<int>> mat = {{0,0,1,0,1,1,1,0,1,1},{1,1,1,1,0,1,1,1,1,1},{1,1,1,1,1,0,0,0,1,1},{1,0,1,0,1,1,1,0,1,1},{0,0,1,1,1,0,1,1,1,1},{1,0,1,1,1,1,1,1,1,1},{1,1,1,1,0,1,0,1,0,1},{0,1,0,0,0,1,0,0,1,1},{1,1,1,0,1,1,0,1,0,1},{1,0,1,1,1,0,1,1,1,0}};
    updateMatrix(mat);
    return 0;
}