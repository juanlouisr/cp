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

int main() 
{
    fast;
    

    return 0;
}

vector<int> twoSum(vector<int>& arr, int target)
{
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size(); i++)
    {
        if (map.find(target - arr[i]) == map.end())
        {
            map[target - arr[i]] = i;
        }
        else
        {
            return vector<int>({i, map[target-arr[i]]});
        }
    }
    

    return vector<int>({-1,-1});
}