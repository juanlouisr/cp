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


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> inorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode> nodes;
    TreeNode *temp = A;
    while (temp != NULL &&)
    {
        nodes.push(*temp);
        temp = temp->left;
        if (temp == NULL)
        {
            if (!nodes.empty())
            {
                temp = &nodes.top();
                nodes.pop();
                ans.push_back(temp->val);
                temp = temp->right;
            }
        }
    }

    return ans;
}

