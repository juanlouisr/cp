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
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;
        vector<int> indices;
        unordered_map<char, int> map;
        unordered_map<char, int> map2;
        for (size_t i = 0; i < s.size(); i++)
        {
            auto get = map.find(s[i]);
            if (get == map.end())
            {
                map.insert({s[i], 1});
            }
            else
            {
                get->second++;
            }
            auto get2 = map2.find(goal[i]);
            if (get2 == map2.end())
            {
                map2.insert({goal[i], 1});
            }
            else
            {
                get2->second++;
            }

            if (s[i] != goal[i])
            {
                indices.push_back(i);
            }


        }
        if (indices.size() == 2)
        {
            return true;
        }
        if (map != map2)
        {
            return false;
        }

        if (indices.size() == 0)
        {
            for (auto it : map)
            {
                if (it.second > 1)   
                {
                    return true;
                }
            }

        }

        return false;
    }
};

int main() 
{


    return 0;
}