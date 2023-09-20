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



bool isAnagram(string s, string t) {
    if (s.size() != t.size())
    {
        return false;
    }
    unordered_map<char, int> charCountS;
    unordered_map<char, int> charCountT;
    for (size_t i = 0; i < s.size(); i++)
    {
        charCountS[s[i]] += 1;
        charCountT[t[i]] += 1;
    }
    for (const auto& pair : charCountS) {
        if (pair.second != charCountT[pair.first])
        {
            return false;
        }
        charCountT.erase(pair.first);
    }
    return charCountT.empty();
}

int main() 
{
    fast;
    

    return 0;
}