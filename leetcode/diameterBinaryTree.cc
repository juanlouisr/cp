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

int diameterOfBinaryTreeHelper(TreeNode* root, int *height) {
    if (root == nullptr || (root->left == nullptr && root->right == nullptr))
    {
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int left = diameterOfBinaryTreeHelper(root->left, &lh);
    int right = diameterOfBinaryTreeHelper(root->right, &rh);
    *height = max(lh, rh) + 1;

    return max(left, max(right, lh+rh+1));
}

int diameterOfBinaryTree(TreeNode* root) {
    int height = 0;
    return diameterOfBinaryTreeHelper(root, &height);
}



int main() 
{
    fast;
    

    return 0;
}