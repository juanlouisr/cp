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

int rob(vector<int>& nums)
{
    int rob1 = 0, rob2 = 0, temp;

    for (int num : nums)
    {
        // rob1, rob2, n, n+1
        temp = max(rob1 + num, rob2);
        rob1 = rob2;
        rob2 = temp;
    }
    return temp;
}

int robHelper(vector<int>& nums, unordered_map<int, int> memo) {
    
}

int main() 
{
    fast;
    

    return 0;
}