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
    cin.tie(NULL);

class Solution {
public:
    static int romanToInt(string s) {
        unordered_map<char, int> values(
            {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
            });
        int val = 0;
        int prevVal = values[s[0]];
        for (size_t i = 0; i < s.size(); i++)
        {
            int currVal = values[s[i]];
            val += currVal;
            if (currVal > prevVal)
            {
                val -= 2*prevVal;
            }
            prevVal = currVal;
        }
        return val;
    }
};

int main(int argc, char const *argv[])
{
    cout << Solution::romanToInt("CD") << endl;
    return 0;
}
