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

int maxAncestorDiff(TreeNode* root) {
    return maxAncestorDiffHelper(root, INT_MAX, INT_MIN);
}

int maxAncestorDiffHelper(TreeNode* root, int lowest, int highest) {
    if (root == nullptr)
    {
        return 0;
    }
    int left = min(lowest, root->val);
    int right = max(highest, root->val);
    return max(abs(right-left), max(maxAncestorDiffHelper(root->left, left, right),  maxAncestorDiffHelper(root->right, left, right)));
}

int main() 
{
    fast;
    

    return 0;
}