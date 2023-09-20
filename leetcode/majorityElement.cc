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

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> charCounter;
    for (int num : nums)
    {
        charCounter[num]++;
    }
    for (auto kv : charCounter)
    {
        if (kv.second > nums.size() / 2) {
            return kv.first;
        }
    }
    return -1;
}

int main() 
{
    fast;
    

    return 0;
}