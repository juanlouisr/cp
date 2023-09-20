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

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> exist;
    for (int num : nums)
    {
        if (exist[num])
        {
            return true;
        }
        exist[num]++;
    }
    return false;
}

int main() 
{
    fast;
    

    return 0;
}