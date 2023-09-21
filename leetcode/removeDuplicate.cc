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

string removeDuplicateLetters(string s) {
    unordered_map<char, int> charCounter;
    for (char c : s) 
    {
        charCounter[c]++;
    }
    string ans = "";
    stack<char> st;
    bool seen[26] = {false};
    for (char c : s)
    {
        charCounter[c]--;

        if (seen[c - 'a'])
        {
            continue;
        }
        
        while (!st.empty() && st.top() > c && charCounter[st.top()])
        {
            seen[st.top() - 'a'] = false;
            st.pop();
        }
        st.push(c);
        seen[c - 'a'] = true;
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() 
{
    fast;
    

    return 0;
}