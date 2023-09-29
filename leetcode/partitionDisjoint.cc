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

int partitionDisjoint(vector<int>& nums) {
    int minIdx = 0;
    int currentMax = nums[0];
    int newMax = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (currentMax > nums[i]) 
        {
            minIdx = i;
            currentMax = newMax;
        }
        if (nums[i] > newMax)
        {
            newMax = nums[i];
        }
    }
    return minIdx + 1;
}

int main() 
{
    fast;
    

    return 0;
}