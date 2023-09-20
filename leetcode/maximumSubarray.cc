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

int maxSubArray(vector<int>& nums) {
    int localMax = nums[0];
    int maximum = nums[0];
    for (size_t i = 1; i < nums.size(); i++)
    {
        localMax = max(nums[i], localMax + nums[i]);
        maximum = max(maximum, localMax);
    }
    
    return maximum;
}

int main() 
{
    fast;
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(arr);

    return 0;
}