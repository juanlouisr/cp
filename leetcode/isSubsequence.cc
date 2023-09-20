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

bool isSubsequence(string s, string t) {
    unordered_map<char, queue<int>> map;
    for (int i = 0; i < t.size(); i++)
    {
        if (map.find(t[i]) == map.end()) 
        {
            queue<int> q;
            q.push(i);
            map[t[i]] = q;
        }
        else
        {
            map[t[i]].push(i);
        }
    }
    int prevIdx = -1;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (map.find(s[i]) == map.end()) 
        {
            return false;
        }
        while (!map[s[i]].empty() && map[s[i]].front() <= prevIdx)
        {
            map[s[i]].pop();
        }
        if (map[s[i]].empty())
        {
            return false;
        }
        prevIdx = map[s[i]].front();
    }
    return true;
}

bool isSubsequence(string s, string t) {
    if (s == "")
    {
        return true;
    }
    if (t == "")
    {
        return false;
    }
    if (s[0] == t[0])
    {
        return isSubsequence(s.substr(1), t.substr(1));
    }
    return isSubsequence(s, t.substr(1));
}

int main() 
{
    fast;
    

    return 0;
}