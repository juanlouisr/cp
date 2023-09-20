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

int search(vector<int>& nums, int target) {
    int high = nums.size()-1;
    int low = 0;
    int mp;
    while (low <= high) 
    {
        mp = (high + low) / 2;
        if (nums[mp] == target) 
        {
            return mp;
        }
        else if (nums[mp] > target) 
        {
            high = mp;
        }
        else 
        {
            low = mp;
        }
    }
    
    return -1;
}

int main() 
{
    fast;
    

    return 0;
}