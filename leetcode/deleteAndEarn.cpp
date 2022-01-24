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
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int, int> umap;
        for (int i = 0; i < size(nums); i++)
        {
            auto get = umap.find(nums[i]);
            if (get == umap.end())
            {
                umap.insert(nums[i], 1);
            }
            else
            {
                get->second++;
            }
        }
        for (int i = 0; i < umap.size(); i++)
        {
            /* code */
        }
        
    }
    int max(vector<int> arr, int m)
    {
        if (m < 0)
        {
            return -1000000007;
        }
        if (m == 0)
        {
            return map.
        }

    }
};