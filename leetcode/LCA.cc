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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (p->val > q->val) {
        TreeNode* temp = p;
        p = q;
        q = temp;
    }
    if (root->left == nullptr || root->right == nullptr || (p->val <= root->val && q->val >= root->val)) 
    {
        return root;
    }
    if (p->val > root->val && q->val > root->val)
    {
        return lowestCommonAncestor(root->right, p, q);
    }
    lowestCommonAncestor(root->left, p, q);
}

bool isBalanced(TreeNode* root) {
    return false;
}

bool hasCycle(ListNode *head) {
    unordered_set<ListNode*> set;
    return hasCycleHelper(head, set);
}

bool hasCycleHelper(ListNode *head, unordered_set<ListNode*>& exist) {
    if (head == nullptr)
    {
        return false;
    }
    if (exist.find(head->next) != exist.end()) 
    {
        return true;
    }
    exist.insert(head->next);
    return hasCycleHelper(head->next, exist);
}

class MyQueue {
public:
    stack<int> first, second;

    MyQueue() {
        
    }
    
    void push(int x) {
        while (!first.empty()) {
            second.push(first.top());
            first.pop();
        }
        first.push(x);
        while (!second.empty()) {
            first.push(second.top());
            second.pop();
        }
    }
    
    int pop() {
        first.pop();
    }
    
    int peek() {
        return first.top();
    }
    
    bool empty() {
        return first.empty();
    }
};


int main() 
{
    fast;
    

    return 0;
}