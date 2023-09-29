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

Node* connect(Node* root) {
    connectHelper(root, nullptr);
    return root;
}

Node* connectHelper(Node* root, Node* right) {
    if (root == nullptr)
    {
        return nullptr;
    }
    root->next = right;
    if (root->left == nullptr && root->right == nullptr)
    {
        return root;
    }
    Node* temp = connectHelper(root->right, right);
    connectHelper(root->left, temp);
    return root;
}

Node* connectBFS(Node* root)
{
    if (root == nullptr)
    {
        return root;
    }
    queue<Node*> q;
    q.push(root->left);
    q.push(root->right);
    Node* prev = root;
    while (!q.empty())
    {
        Node* left = q.front();
        q.pop();
        prev->next = left;
        
        Node* right = q.front();
        if (left->left != nullptr && left->right != nullptr)
        {
            
        }
    }
}


int main() 
{
    fast;
    

    return 0;
}