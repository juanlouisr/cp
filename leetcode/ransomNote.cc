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

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> charCounter;
    for (char c : magazine)
    {
        charCounter[c]++;
    }
    for (char c : ransomNote)
    {
        if (!charCounter[c])
        {
            return false;
        }
        charCounter[c]--;
    }
    return true;
}

int main() 
{
    fast;
    

    return 0;
}