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

int longestPalindrome(string s) {
    unordered_map<char, int> map;
    for (char c : s)
    {
        map[c]++;
    }
    int lp = 0;
    bool anyOdds = false;
    for (auto val : map)
    {
        if (val.second % 2 == 0) 
        {
            lp += val.second;
        }
        else 
        {
            lp += val.second - 1;
            anyOdds = true;
        }
    }
    return lp + anyOdds;
}

int main() 
{
    fast;
    

    return 0;
}