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

// 1 -> 2 -> 3 -> null
ListNode* lastNode = nullptr;

ListNode* reverseListHelper(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        lastNode = head;
        return head;
    }
    ListNode* newHead = reverseListHelper(head->next);
    newHead->next = head;
    head->next = nullptr;
    return head;
}

ListNode* reverseList(ListNode* head)  {
    reverseListHelper(head);
    return lastNode;
}



int main() 
{
    fast;
    ListNode *one = new ListNode(1);
    ListNode *two = new ListNode(2);
    ListNode *three = new ListNode(3);
    ListNode *four = new ListNode(4);
    ListNode *five = new ListNode(5);
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    ListNode *reverse = reverseList(one);
    cout << reverse->val;


    return 0;
}