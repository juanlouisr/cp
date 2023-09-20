#include <bits/stdc++.h>
#include "leetcode.h"
using namespace std;
#define ll long long
#define mod 1000000007
#define sc ;
#define TC ll tc sc cin >> tc sc while(tc--)
#define forto(var,up) for(ll(var)=0;(var)<(up);(var)++)
#define all(arr) (arr).begin(), (arr).end()
// #define fast\
//     ios::sync_with_stdio(false); \
//     cin.tie(NULL)

ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) 
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() 
{
    // fast;
    

    return 0;
}