#include <bits/stdc++.h>
#include "leetcode.h"
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

vector<vector<int>> levelOrder(TreeNode* root) {
    map<int, vector<int>> map;
    levelOrderHelper(root, 0, map);
    vector<vector<int>> ans;
    for (auto kv : map)
    {
        ans.push_back(kv.second);
    }
    return ans;
}

void levelOrderHelper(TreeNode* root, int level, map<int, vector<int>>& map) {
    if (root == nullptr)
    {
        return;
    }
    if (map.find(level) != map.end())
    {
        map[level].push_back(root->val);
    }
    else
    {
        map[level] = {root->val};
    }
    levelOrderHelper(root->left, level + 1, map);
    levelOrderHelper(root->right, level + 1, map);
}

int main() 
{
    fast;
    

    return 0;
}