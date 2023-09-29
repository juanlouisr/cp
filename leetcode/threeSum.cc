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

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    set<vector<int>> ans;
    int target, left, right;
    for (int i = 0; i < nums.size()-2; i++)
    {
        if (i > 0 && nums[i] == nums[i -1])
        {
            continue;
        }
        target = nums[i];
        left = i+1;
        right = nums.size()-1;
        while (left < right)
        {
            if (target + nums[left] + nums[right] == 0)
            {
                ans.insert({target, nums[left], nums[right]});
                left++;
                while (left < right && nums[left] == target)
                {
                    left++;
                }
            }
            else if (target + nums[left] + nums[right] > 0)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }
    vector<vector<int>> realAns;
    realAns.assign(ans.begin(), ans.end());
    return realAns;
}


int main() 
{
    fast;
    

    return 0;
}