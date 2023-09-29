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

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSum;
    prefixSum[0] = 1;
    int ans = 0;
    int sum = 0;
    int prefix;
    for (size_t i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        prefix = sum - k;
        if (prefixSum[prefix])
        {
            ans += prefixSum[prefix];
        }
        prefixSum[sum]++;
    }
    return ans;
}

int main() 
{
    fast;
    

    return 0;
}