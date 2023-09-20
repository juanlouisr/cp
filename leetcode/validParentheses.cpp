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


bool isValid(string s) {
    unordered_map<char, char> prthMap({
        {'}', '{'},
        {']', '['},
        {')', '('}
    });

    stack<char> check;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (prthMap[s[i]]) 
        {
            if (check.empty())
            {
                return false;
            }
            if (check.top() != prthMap[s[i]])
            {
                return false;
            }
            check.pop();
        }
        else
        {
            check.push(s[i]);
        }
    }
    

    return check.empty();
}

int main() 
{
    fast;
    cout << isValid("()[]{}");

    return 0;
}
