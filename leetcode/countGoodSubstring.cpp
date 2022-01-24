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
    int countGoodSubstrings(string s) {
        int count = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            int j = i;
            set<char> set;
            bool found = false;
            while (j < i+3 && j < s.size() && !found)
            {
                auto get = set.find(s[j]);
                if (get != set.end()) {
                    found = true;
                }
                else
                {
                    set.insert(s[j]);
                }
                j++;
            }
            if (!found && j == i+3)
            {
                count++;
            }
            
        }
        return count;
        
    }
};

int main() 
{
    

    return 0;
}