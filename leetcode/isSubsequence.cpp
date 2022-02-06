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
    bool isSubsequence(string s, string t) {
        unordered_map<char, vector<int>> umap;
        for (size_t i = 0; i < size(t); i++)
        {
            auto get = umap.find(t[i]);
            if (get == umap.end())
            {
                vector<int> vi;
                vi.push_back(i);
                umap[t[i]] = vi;
            }
            else
            {
                get->second.push_back(i);
            }
        }
        int prev = -1;
        for (size_t i = 0; i < size(s); i++)
        {
            auto get = umap.find(s[i]);
            if (get == umap.end())
            {
                return false;
            }
            else
            {
                for (size_t j = 0; j < get->second.size(); j++)
                {
                    if (get->second.size())
                    {
                        
                    }
                }
                
            }
        }
        return true;
        
    }
};


int main() 
{
    

    return 0;
}