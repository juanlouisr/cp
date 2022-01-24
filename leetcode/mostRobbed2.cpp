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
    int rob(vector<int>& nums) {
        vector<int> dp(size(nums), -1);
        vector<int> dp2(size(nums), -1);
        return max(func(vector<int>(nums.begin(), nums.end()-1), dp, size(nums)-2), 
                    func(vector<int>(nums.begin()+1, nums.end()), dp2, size(nums)-2));
    }
    int func(vector<int> nums, vector<int>& dp,int m)
    {
        if (m<0)
            return 0;
        if (dp[m]!=-1)
        {
            return dp[m];
        }
        dp[m] = max(nums[m]+func(nums, dp,m-2), func(nums,dp,m-1));
        return dp[m];
    }
};

